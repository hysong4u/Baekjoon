#include <iostream>
using namespace std;

int main() {
    string word;
    int wordCnt = 0;

    getline(cin, word);

    if(word.length() <= 1000000) {
        bool inWord = false;

        for(int i = 0; i < word.length(); i++) {
            if(word[i] != ' ') {
                inWord = true;
            } 
            else if(inWord) {
                wordCnt++;
                inWord = false;
            }
        }

        if(inWord) {
            wordCnt++;
        }

        cout << wordCnt;
    } 
    else {
        cout << "글자 수 초과";
    }

    return 0;
}
