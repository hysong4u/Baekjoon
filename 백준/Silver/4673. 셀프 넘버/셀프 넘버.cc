#include <iostream>
#include <set>
using namespace std;

int calculateNewNum(int num){
  int sum = num;
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  set<int> self_numbers;
  
  for(int i = 1; i <= 10000; i++){
    int new_num = calculateNewNum(i);
    self_numbers.insert(new_num);
  }
  
  for(int i = 1; i <= 10000; i++){
    if (self_numbers.find(i) == self_numbers.end()) {
        cout << i << endl;
    }
  }

  return 0;
}
