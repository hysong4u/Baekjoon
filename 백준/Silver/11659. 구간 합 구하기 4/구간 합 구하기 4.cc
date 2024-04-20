#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num, section_num;
    cin >> num >> section_num;

    vector<int> v(num + 1); 

    for (int i = 1; i <= num; ++i) {
        cin >> v[i];
        v[i] += v[i - 1]; 
    }

    for (int i = 0; i < section_num; ++i) {
        int start, end;
        cin >> start >> end;
        int sum = v[end] - v[start - 1]; 
        cout << sum << "\n";
    }

    return 0;
}
