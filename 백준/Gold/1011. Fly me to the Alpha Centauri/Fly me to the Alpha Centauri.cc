#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cin >> num;
  
    for (int i = 0; i < num; i++) {
        long long x, y;
        long long move, max = 0;
      
        cin >> x >> y;
      
        while (max * max <= y - x)
            max++;
        max--;
        move = 2 * max - 1;
        long long rem = y - x - max * max;
        rem = static_cast<long long>(ceil(static_cast<double>(rem) / static_cast<double>(max)));
        move += rem;
        cout << move << endl;
    }
    return 0;
}
