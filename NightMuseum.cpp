#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    int count = 0;
    for (int i=0; i<s.size(); i++) {
        if (i==0) {
            int diff = abs('a'-s[i]);
            if (diff<13)
                count += diff;
            else 
                count += (26-diff);
        }
        else {
            int diff = abs(s[i-1]-s[i]);
            if (diff<13)
                count += diff;
            else 
                count += (26-diff);
        }
    }
    cout << count << endl;

    return 0;
}