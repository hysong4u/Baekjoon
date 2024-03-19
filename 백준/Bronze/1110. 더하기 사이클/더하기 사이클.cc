#include <iostream>
#include <algorithm>
using namespace std;

int tens(int num){ //10의 자리 
  return num / 10;
}

int units(int num){ //1의 자리
  return num % 10;
}

int main() {
  int firstnum, num, newNum, cnt= 0;
  cin >> firstnum;
  num = firstnum;
  
  while(true){
  newNum =  (tens(num) +  units(num)) % 10 + units(num) * 10;
  cnt ++;
    
  if(firstnum == newNum){
    break;
  } 
  num = newNum;
  newNum = 0;
  }

  cout << cnt;

}  
