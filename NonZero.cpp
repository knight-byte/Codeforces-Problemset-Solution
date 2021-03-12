#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt=0, sum=0;
        for (int i=0; i<n; i++) {
            int temp;
            cin >> temp;
            if (temp==0) {
                cnt++;
                a.push_back(temp+1);
            }
            else 
                a.push_back(temp);
        }
        for (auto &x:a)
            sum += x;
        if (sum==0)
            cnt++;
        cout << cnt << endl;
    }

    return 0;
}