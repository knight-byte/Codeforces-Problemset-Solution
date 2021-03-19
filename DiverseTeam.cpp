#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, k;
    cin >> n >> k;
    vector<int> a;
    set<int> ans;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        if (!ans.count(x)) {
            a.push_back(i+1);
            ans.insert(x);
        }
    }
    if (a.size()>=k) {
        cout << "YES\n";
        for (int i=0; i<k; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    else 
        cout << "NO\n";

    return 0;
}