#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num, cnt_num;
    cin >> num;

    unordered_map<int, int> count_map;

    for (int i = 0; i < num; i++) {
        int card;
        cin >> card;
        count_map[card]++;
    }

    cin >> cnt_num;
    for (int i = 0; i < cnt_num; i++){
        int query;
        cin >> query;
        cout << count_map[query] << " ";
    }
    cout << '\n';
    return 0;
}
