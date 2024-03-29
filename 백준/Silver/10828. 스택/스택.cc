#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> s;
  int n;
  int num;
  string cmd;

  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> cmd;

    if (cmd == "push"){
      cin >> num;
      s.push(num);
    }

    else if(cmd == "top"){
      if(s.empty()){
        cout << "-1" << endl;
      }
      else{
        cout << s.top() << endl;
      }
    }

    else if(cmd == "size"){
        cout << s.size() << endl;
    }

    else if(cmd == "empty"){
      s.empty() ? cout << "1" << endl : cout << "0" << endl;
    }

    else if(cmd == "pop"){
        if(s.empty()){
            cout << "-1" << endl;
        }
        else{
            cout << s.top() << endl;
            s.pop();
        }
    }
  }
}
