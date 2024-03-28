#include <iostream>
#include <algorithm>

using namespace std;

struct Score{
    string name;
    int korean;
    int english;
    int math;
};

bool sortScore(Score a, Score b){
    if(a.korean == b.korean){
        if(a.english == b.english){
            if (a.math == b.math) {
                return a.name < b.name;
            }
            return a.math > b.math;
        }
        return a.english < b.english;
    }
    return a.korean > b.korean;
}

int main() {
    int n;
    scanf("%d", &n);
    Score *score = new Score[n];

    for (int i = 0; i < n; i++){
        char name[100];
        scanf("%s %d %d %d", name, &score[i].korean, &score[i].english, &score[i].math);
        score[i].name = string(name);
    }

    sort(score, score +n, sortScore);
  
    for (int i = 0; i < n; i++){
        printf("%s\n", score[i].name.c_str());
    }
  
    delete [] score;
}
