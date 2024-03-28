#include <iostream>
#include <algorithm>

using namespace std;


int main() {
  int weight;
  int count = 0;
  
  cin >> weight;

  while(weight > 0){
    if(weight % 5 == 0){
      count += weight/5;
      break;
    }
     weight-=3;
     count++;
    
    if(weight < 0){
      count = -1;
      break;
    }
    
  }
  cout << count;
}
