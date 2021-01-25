#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int num;
    cin >> num;
    string s1;
    cin >> s1;
    char cons = s1[0];
    int result = 0;
    // finding maximum consecutive array
    for (auto i=s1.begin(); i!=s1.end(); i++) {
        if (*i == cons) 
            result++;
        else
            cons = *i;
    }
    // printing the result and returning 0
    cout << result-1 << endl;
    return 0;
}