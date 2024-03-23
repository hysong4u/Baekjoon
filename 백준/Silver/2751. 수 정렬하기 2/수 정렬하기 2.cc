#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    return a < b;
}


int main() {
    int n;
    cin >> n;

    int *number = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    sort(number, number + n, compare);

    for (int i = 0; i < n; i++) {
        cout << number[i]<<"\n" ;
    }

    delete[] number;

    return 0;
}
