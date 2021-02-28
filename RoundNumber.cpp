#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;
        int power = 1;
        while (n) {
            if (n%10)
                arr.push_back(n%10*power);
            n /= 10;
            power *= 10;
        }
        cout << arr.size() << endl;
        for (auto &x:arr)
            cout << x << ' ';
        cout << endl;
    }

    return 0;
}