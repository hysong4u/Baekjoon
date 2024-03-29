#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int> q;
  int n;
  int num;
  string cmd;

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> cmd;

    if (cmd == "push_front"){
      cin >> num;
      q.push_front(num);
    }

     else if (cmd == "push_back"){
        cin >> num;
        q.push_back(num);
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

    else if(cmd == "pop_front"){
        if(q.empty()){
            cout << "-1" << "\n";
        }
        else{
            cout << q.front() << "\n";
            q.pop_front();
        }
    }

    else if(cmd == "pop_back"){
        if(q.empty()){
            cout << "-1" << "\n";
        }
        else{
            cout << q.back() << "\n";
            q.pop_back();
        }
    }
  }
}
