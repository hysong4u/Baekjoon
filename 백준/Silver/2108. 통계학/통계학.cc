#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<unordered_map>

using namespace std;

float average(vector<int> v , int n){ //산술평균
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    float result = round(float(sum) / n);
    return (result == -0) ? 0 : result;
}

int median(vector<int> v, int n){ //중앙값
    n = n / 2 + 1;
    sort(v.begin(), v.end());
    return v[n-1];
}

int mode(vector<int> v, int n){ //최빈값
    unordered_map<int, int> freqMap;

    for (int num : v) {
        freqMap[num]++;
    }

    vector<int> mode;
    int maxFreq = 0;

    for (const auto& pair : freqMap) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
              mode.clear();
              mode.push_back(pair.first);
        } else if (pair.second == maxFreq) {
              mode.push_back(pair.first);
        }
    }

    sort(mode.begin(), mode.end());
    return mode.size() > 1 ? mode[1] : mode[0];
}

int range(vector<int> v, int n){ //범위
    sort(v.begin(), v.end());
    return v[n-1] - v[0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n,0);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    cout << average(v, n) << endl 
         << median(v, n) << endl
         << mode(v, n) << endl
         << range(v, n) << endl;
    return 0;
}
