#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n), b(n), ans;
    for (auto &x:a)
        cin >> x;
    partial_sort_copy(a.begin(), a.end(), b.rbegin(), b.rend());
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i] == b[j]) {
                ans.push_back(j+1);
                break;
            }
        }
    }
    for (auto &x:ans)
        cout << x << " ";
    cout << endl;

    return 0;
}