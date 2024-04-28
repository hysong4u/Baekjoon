#include <iostream>


using namespace std;

int round(int num) {
    return (num % 2) == 0? num / 2 : num / 2 +1   ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, l;
    cin >> n >> k >> l;

    int cnt = 0;

    while(k != l){
      k = round(k);
      l = round(l);
      cnt++;
    }
    cout << cnt;

    return 0;
}
