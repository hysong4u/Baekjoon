#include <iostream>
#include <algorithm>
using namespace std;

int max(float arr[], int n ){

  int max = arr[0];
  for(int i = 0; i < n; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

float calculateNewScore(int score, int max_num){
  return float(score) /max_num * 100;
}

float average(float arr[], int n){
  float sum = 0;
  for(int i = 0; i < n; i++){
    sum += arr[i];
  }
  return sum/n;
}


int main() {
  int n = 0;
  cin >> n;

  float *arr = new float[n];
  float *new_arr = new float[n];

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int max_num= max(arr, n);
  
  for (int i = 0; i < n; i++){
    new_arr[i] = calculateNewScore(arr[i], max_num);
  }

  float new_score = average(new_arr, n);
  cout << new_score;

  delete[] arr;
  delete[] new_arr;
  return 0;


}  
