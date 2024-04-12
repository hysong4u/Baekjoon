#include <iostream>
#include <vector>
using namespace std;

struct Person {
    int weight;
    int height;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<Person> p(n);
    vector<int> rank(n, 1);

    for (int i = 0; i < n; i++) {
        cin >> p[i].weight >> p[i].height;
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (p[i].weight < p[j].weight && p[i].height < p[j].height) {
                rank[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << rank[i] << " ";
    }

    return 0;
}
