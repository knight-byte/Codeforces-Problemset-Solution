#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m, z;
    cin >> n >> m >> z;
    if (n>z || m>z)
        cout << 0 << endl;
    else {
        vector<int> ans;
        for (int i=n; i<=z; i+=n)
            ans.push_back(i);
        for (int i=m; i<=z; i+=m)
            ans.push_back(i);
        int cnt=0;
        sort(ans.begin(), ans.end());
        for (int i=0; i<ans.size()-1; i++) {
            if (ans[i] == ans[i+1])
                cnt++;
        }   
        cout << cnt << endl;
    }
    // not the optimal solution, idk what the fuck i was thinking
    return 0;
}