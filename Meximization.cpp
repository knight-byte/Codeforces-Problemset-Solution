#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> s;
        vector<int> v;
        vector<int> ans;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            if (count(s.begin(), s.end(), x)==0) 
                s.insert(x);
            else 
                v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (auto i=s.begin(); i!=s.end(); i++) 
            ans.push_back(*i);
        for (int i=0; i<v.size(); i++)
            ans.push_back(v[i]);
        for (auto &x:ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}