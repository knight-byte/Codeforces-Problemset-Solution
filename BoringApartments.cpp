#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // variable declaration and input
    int t;
    cin >> t;
    vector<int> res;
    while (t--) {
        string x;
        cin >> x;
        if (x=="1") 
            res.push_back(1);
        else {
            int digit = x[0] - '0';
            int ans = (digit-1) * 10;
            for (int i=1; i<=x.size(); i++)
                ans += i;
            res.push_back(ans);  
        }
    }
    for (auto &x:res)
        cout << x << endl;

    return 0;
}