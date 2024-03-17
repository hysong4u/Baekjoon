#include <iostream>
using namespace std;

bool isPrime(int n){
  if( n < 2) return false; //1이면 소수 아님
  
  for(int i = 2; i < n; i++){ 
      if(n%i==0) return false;
  }
  return true;
}

int main() {
  int cnt, prinmeCnt = 0;
  cin >> cnt;

  int arr[cnt];

  for(int i = 0; i < cnt; i++){
    cin >> arr[i];
  }

  for(int i = 0; i < cnt; i++){
    isPrime(arr[i]) ? prinmeCnt++ : prinmeCnt;
  }

  cout << prinmeCnt;

  
}  
