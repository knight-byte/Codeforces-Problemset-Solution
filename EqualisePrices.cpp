#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x:a)
            cin >> x;
        int total=0;
        for (auto &x:a)
            total += x;
            int temp=total/n;
        if (total%n==0)
            cout << total/n << endl;
        else {
            while (n*temp<total)
                temp++;
            cout << temp << endl;
        }
    }

    return 0;
}