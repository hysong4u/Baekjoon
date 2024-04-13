#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


  vector<int> input;
  int n;
  while (true) {
      cin >> n;
      if (n == 0) break;
      input.push_back(n);
  }
  

  for (int n : input) {
    int cnt = 0;
    vector<bool> v(2 * n + 1, true);

    for (int i = 2; i * i <= 2 * n; i++) {
        if (v[i]) {
            for (int j = i * i; j <= 2 * n; j += i) {
                v[j] = false;
            }
        }
    }

    for (int i = n + 1; i <= 2 * n; i++) {
        if (v[i]) {
            cnt++;
        }
    }

    cout << cnt << endl;
  }

  return 0;
}
