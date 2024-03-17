#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int cnt =  0;
  cin >> cnt;

  int arr[cnt];
  
  for(int i = 0; i < cnt; i++){
    cin >> arr[i];
  }

  sort(arr, arr + cnt);

  for(int i = 0; i < cnt; i++)
    cout <<  arr[i] <<endl;

}  
