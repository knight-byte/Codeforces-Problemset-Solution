#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x;
    cin >> x;
    vector<string> statement;
    string s;
    for (int i=0; i<x; i++) {
        cin >> s;
        statement.push_back(s);
    }
    int result=0;
    for (auto i=statement.begin(); i!=statement.end(); i++) {
        if ((*i == "X++") || (*i == "++X")) 
            result++;
        if((*i == "X--") || (*i == "--X"))
            result--;
    }
    cout << result << endl;

    return 0;
}