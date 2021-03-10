#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i=0; i<n-1; i+=2) 
        ans += (a[i+1]-a[i]);
    cout << ans << endl;
    
    return 0;
}