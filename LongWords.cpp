#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int wordCount;
    cin >> wordCount;
    string word;
    vector<string> wordsArray;
    for (int i=0; i<wordCount; i++) {
        cin >> word;
        if (word.size() > 10) {
            string tempWord;
            int temp = word.size() - 2;
            string wordLength = std::to_string(temp);
            tempWord.push_back(word[0]);
            tempWord += wordLength;
            tempWord.push_back(word.back());
            wordsArray.push_back(tempWord);
        }
        else  
            wordsArray.push_back(word);
    }
    for (auto i=wordsArray.begin(); i!=wordsArray.end(); i++)
        cout << *i << endl;
    
    return 0;
}