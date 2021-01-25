#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string word, newWord;
    cin >> word;
    int cap = 0, small = 0;
    for (int i=0; i<word.size(); i++) {
        if (isupper(word[i]))
            cap++;
        else
            small++;
    }
    if (cap > small) {
        for (int i=0; i<word.size(); i++) {
            newWord += toupper(word[i]);
        }
    }
    else {
        for (int i=0; i<word.size(); i++) {
            newWord += tolower(word[i]);
        }
    }   
    cout << newWord << endl;
    return 0;
}