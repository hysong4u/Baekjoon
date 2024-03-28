#include <iostream>
#include <algorithm>

using namespace std;

int totalSum(int *arr, int n){
  int sum = 0;
  int total_sum = 0;

   for (int i = 0; i < n; i++){
     sum = 0; 
     for(int j = 0; j <= i; j++){
       sum += arr[j];
    }
      total_sum += sum;
   }  
    return total_sum;
}


int main() {
  int n;
  cin >> n;
  int *arr = new int[n];

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  sort(arr, arr +n);

  cout << totalSum(arr, n);
  
   delete [] arr;
}
