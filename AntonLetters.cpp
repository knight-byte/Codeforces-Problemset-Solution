#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str1;
    getline(cin, str1);
    set<char> panda;
    for (int i=0; i<str1.size(); i++) {
        if (isalpha(str1[i]))
            panda.insert(str1[i]);
    }
    cout << panda.size() << endl;
    return 0;
}