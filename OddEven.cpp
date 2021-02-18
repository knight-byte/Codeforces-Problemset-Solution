#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<int> ans;
    while (t--) {
        int a, b;
        cin >> a >> b;
        // three conditions will arise
        if (a==b)
            ans.push_back(0);
        // if a<b and the difference is odd, then in one step we get the answer (by adding the required odd number)
        // if the difference is even, we need two steps
        else if (a<b) {
            int diff = b-a;
            if (diff%2!=0)
                ans.push_back(1);
            else 
                ans.push_back(2);      
        }
        // if a>b and the difference is even, then we just subtract their differnce to get the answer
        // if the difference is odd, we need two steps
        else {
            int diff = a-b;
            if (diff%2==0)
                ans.push_back(1);
            else
                ans.push_back(2);
        }
    }
    for (auto &x:ans)
        cout << x << endl;

    return 0;
}