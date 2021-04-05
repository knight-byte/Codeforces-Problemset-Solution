#include <bits/stdc++.h>
using namespace std;

bool caps(string s) {
    int count = 0;
    for (int i=0; i<s.size(); i++) {
        if (isupper(s[i]))
            count++;
    }
    if (count == s.size())
        return true;
    else 
        return false;
}

bool misCaps(string s) {
    int count=0, pos=0;
    for (int i=0; i<s.size(); i++) {
        if (i==0 && islower(s[i]))
            pos = 1;
        else if (isupper(s[i]))
            count++;
    }
    if (pos==1 && count == s.size()-1)
        return true;
    else 
        return false;
}

int main(void) {
    string s, ans;
    cin >> s;
    if (caps(s)) {
        for (int i=0; i<s.size(); i++) {
            ans.push_back(tolower(s[i]));
        }
    }
    else if (misCaps(s)) {
        for (int i=0; i<s.size(); i++) {
            if (i==0)
                ans.push_back(toupper(s[i]));
            else   
                ans.push_back(tolower(s[i]));
        }
    }
    else 
        ans = s;

    cout << ans << endl;
    return 0;
}