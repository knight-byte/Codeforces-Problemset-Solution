#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp = 1;
        int z = n/2;
        if (z%2!=0) {
            cout << "NO\n";
            continue;
        }
        else {
            vector<int> arr;
            for (int i=0; i<n/2; i++)
                arr.push_back(2*(i+1));
            for (int i=n/2-1; i<n-1; i++) {
                arr.push_back(temp);
                temp += 2;
            }
            arr[n-1] += n/2;
            cout << "YES\n";
            for (auto &x:arr)
                cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}