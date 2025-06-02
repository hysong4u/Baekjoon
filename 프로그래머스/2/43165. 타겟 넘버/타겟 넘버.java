class Solution {
    static int cnt = 0;
    
    public int solution(int[] numbers, int target) {
        int answer = 0;
 
        answer = dfs(numbers,0,0,target);
        return answer;
    }
    
    private int dfs(int[] numbers, int depth, int sum, int target){
        
        if((depth == numbers.length)) {
            return (sum == target)?1:0;
        }
        
        int plus = dfs(numbers, depth + 1, sum + numbers[depth], target);
        int minus = dfs(numbers, depth + 1, sum - numbers[depth], target);
        
        return plus+minus;
        
    }
}