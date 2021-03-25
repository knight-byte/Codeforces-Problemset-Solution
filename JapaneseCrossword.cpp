#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, con=0, group=0;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ans;
    for (int i=0; i<n; i++) {
        if (s[i]=='B' && s[i+1]=='B')
            con++;
        else if (s[i]=='B' && s[i+1]!='B') {
            con++;
            ans.push_back(con);
            con = 0;
            group++;
        }
    }
    cout << group << endl;
    for (auto &x:ans)
        cout << x << " ";
    cout << endl;

    return 0;
}