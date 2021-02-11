#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // variable declaration and input
    int t;
    cin >> t;
    vector<int> ans;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        if (n-n%x+y <= n) 
            ans.push_back(n-n%x+y); //  editorial solution, mine was getting TLE
        else 
            ans.push_back(n-n%x-(x-y));
    }

    // output and returning 0
    for (auto i=ans.begin(); i!=ans.end(); i++)
        cout << *i << endl;

    return 0;
}