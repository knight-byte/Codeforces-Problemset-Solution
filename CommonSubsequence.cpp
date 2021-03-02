#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int l, int r, int x) {
    if (r>=1) {
        int mid = l+(r-l)/2;
        if (arr[mid]==x)
            return 1;
        if (arr[mid]>x) 
            return binary_search(arr, l, mid-1, x);
        return binary_search(arr, mid+1, r, x);
    }
    return 0;
}

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, m, var=0;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (auto &x:a)
            cin >> x;
        for (auto &y:b)
            cin >> y;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i=0; i<n; i++) {
            int temp = 0;
            temp = binary_search(b, 0, m, a[i]);
            if (temp==1) {
                var = a[i];
                break;
            }
            else 
                continue;
        }
        if (var==0)
            cout << "NO\n";
        else {
            cout << "YES\n";
            cout << 1 << " " << var << endl;
        }
    }

    return 0;
}