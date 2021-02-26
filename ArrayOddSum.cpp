#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<string> ans;
    while (t--) {
        int n;
        cin >> n;
        int total = 0;
        vector<int> arr(n);
        for (auto &x:arr)
            cin >> x;
        for (auto &x:arr)
            total += x;
        if (total%2!=0)
            ans.push_back("YES");
        else {
            bool even=false, odd=false;
            for (int i=0; i<arr.size(); i++) {
                if (arr[i]%2==0)
                    even = true;
                else if (arr[i]%2!=0)
                    odd = true;
            }
            if (even && odd)
                ans.push_back("YES");
            else 
                ans.push_back("NO");
        }
    }
    for (auto &x:ans)
        cout << x << endl;

    return 0;
}