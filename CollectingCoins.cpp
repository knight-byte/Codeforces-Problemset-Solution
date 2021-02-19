#include <bits/stdc++.h>
using namespace std;

int main(void) {
    const int length = 3;
    int t;
    cin >> t;
    vector<string> ans;
    while (t--) {
        vector<int> temp(length);
        for (auto &x:temp)
            cin >> x;
        int n;
        cin >> n;
        sort(temp.begin(), temp.end());
        // first we make all the coins equal by adding from n
        // then if n is divisible by 3, we get YES 
        // else NO
        int toSub = ((temp[2]-temp[0]) + (temp[2]-temp[1]));
        n -= toSub;
        if (n<0)
            ans.push_back("NO");
        else {
            if (n%3==0)
                ans.push_back("YES");
            else 
                ans.push_back("NO");
        }
    }
    for (auto &x:ans)
        cout << x << endl;

    return 0;
}