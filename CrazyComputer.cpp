#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    reverse(a.begin(), a.end());
    int cnt = 1;
    for (int i=0; i<n-1; i++) {
        if (a[i]-a[i+1]<=c) 
            cnt++;
        else 
            break;
    }
    cout << cnt << endl;

    return 0;
}