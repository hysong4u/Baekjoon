import java.util.*;

class Solution {
    public int solution(int[] scoville, int K) {
        int answer = 0;
        int cnt = 0;
        
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for(int s:scoville) {
            pq.offer(s);
        }
        
        while(pq.peek() < K && pq.size() >=2){ //peek
            int first = pq.poll();
            int second = pq.poll();
            int cal = first + second * 2;
            pq.offer(cal);
            cnt++;
        }
        if(pq.peek()<K) return -1;
        return answer = cnt;

    }
    
}