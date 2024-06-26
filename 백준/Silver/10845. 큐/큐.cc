#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;
  int n;
  int num;
  string cmd;

  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> cmd;

    if (cmd == "push"){
      cin >> num;
      q.push(num);
    }

    else if(cmd == "front"){
      if(q.empty()){
        cout << "-1" << "\n";
      }
      else{
        cout << q.front() << "\n";
      }
    }
    
    else if(cmd == "back"){
      if(q.empty()){
        cout << "-1" << "\n";
      }
      else{
        cout << q.back() << "\n";
      }
      }
  

    else if(cmd == "size"){
        cout << q.size() << "\n";
    }

    else if(cmd == "empty"){
      q.empty() ? cout << "1" << "\n" : cout << "0" << "\n";
    }

    else if(cmd == "pop"){
        if(q.empty()){
            cout << "-1" << "\n";
        }
        else{
            cout << q.front() << "\n";
            q.pop();
        }
    }
  }
}
