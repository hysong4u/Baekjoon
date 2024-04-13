#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    int sum = 0;
    cin >> n;
    vector<int> v(n);

  for(int i = 0; i < n; i++){
    cin >> num;
    if(num == 0){
      v.pop_back();
    }
    else {v.push_back(num);} 
  }

  for(int i = 0; i < v.size(); i++){
    sum += v[i];
  }

  cout << sum;
  
}
