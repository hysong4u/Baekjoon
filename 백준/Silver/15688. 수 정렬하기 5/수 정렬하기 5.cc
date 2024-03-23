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
        scanf("%d", &number[i]);
    }

    stable_sort(number, number + n, compare);

    for (int i = 0; i < n; i++) {
        printf("%d\n", number[i]) ;
    }

    delete[] number;

    return 0;
}
