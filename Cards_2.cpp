#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x:a)
        cin >> x;
    int sum = *min_element(a.begin(), a.end()) + *max_element(a.begin(), a.end());
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i] + a[j] == sum) {
                cout << i+1 << " " << j+1 << endl;
                a[i] = 0;
                a[j] = 0;
                break;
            }
        }
    }
    

    return 0;
}