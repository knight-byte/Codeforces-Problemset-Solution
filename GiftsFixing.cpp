#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // taking input and variable declaration
    int t;
    cin >> t;
    vector<long long> ans;
    while (t--) {
        int n;
        cin >> n;
        // input from stream into vector
        vector<long long> a(n), b(n);
        for (auto &ae : a)
            cin >> ae;
        for (auto &be : b)
            cin >> be;
        // main logic 
        int mina = *min_element(a.begin(), a.end());
        int minb = *min_element(b.begin(), b.end());
        unsigned long long res = 0;
        for (int i=0; i<n; i++) 
            res += max(a[i] - mina, b[i] - minb);
        ans.push_back(res); 
    }

    // output and returning 0
    for (auto i=ans.begin(); i!=ans.end(); i++)
        cout << *i << endl;

    return 0;
}