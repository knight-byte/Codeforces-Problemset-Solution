#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // this one was tricky
    // I planned to do in a different manner, but due to difficulty in taking 
    int t;
    cin >> t;
    vector<int> sol;
    while (t--) {
        int n, k;
        cin >> n >> k;
        // I don't know how it does, but it takes the input and autmatically pushes into the vector
        vector<int> a(n);
        for (auto &it : a) 
            cin >> it;
        vector<int> b(n);
        for (auto &it : b)
            cin >> it;

        sort(a.begin(), a.end()); // sorting the vector normally
        sort(b.rbegin(), b.rend()); // sorting the vector in decreasing order, or else had to traverse from the back for this vector 
        int ans = 0;
        for (int i=0; i<n; ++i) {
            if (i<k) 
                ans += max(a[i], b[i]);
            else 
                ans += a[i];
        }
        sol.push_back(ans);
    }

    // output and returning 0  
    for (auto i=sol.begin(); i!=sol.end(); i++)
        cout << *i << endl;

    return 0;
}