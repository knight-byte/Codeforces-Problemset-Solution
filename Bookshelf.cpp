#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x:a)
            cin >> x;
        while (a.back()==0)
            a.pop_back();
        reverse(a.begin(), a.end());
        while (a.back()==0)
            a.pop_back();
        int cnt = count(a.begin(), a.end(), 0);
        cout << cnt << endl;
    }

    return 0;
}