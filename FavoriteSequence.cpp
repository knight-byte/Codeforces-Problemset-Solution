#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &x:arr)
            cin >> x;
        vector<int> sol;
        int i=0, j=n-1;
        bool back = false;
        while (n--) {
            if (!back) {
                sol.push_back(arr[i]);
                i++;
                back = true;
            }
            else {
                sol.push_back(arr[j]);
                j--;
                back = false;
            }
        }
        for (auto &x:sol)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}