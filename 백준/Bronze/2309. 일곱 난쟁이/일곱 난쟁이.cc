#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int sum = 0;
  int arr[9];

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  for (int i = 0; i < 9; i++){
    cin >> arr[i];
    sum += arr[i];
    }

    sort(arr, arr+9); 

  for(int i = 0; i < 9; i++){
    for(int j = i+1; j < 9; j++){
      for(int k = 0; k < 9; k++){
        if(sum - arr[i] - arr[j] == 100){
          for(int l = 0; l < 9; l++){
            if(l != i && l != j){
              cout << arr[l] << "\n";
            }
          }
          return 0;
        }
      }
    }
  }
  
}
