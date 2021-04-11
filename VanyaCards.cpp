#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, x;
    cin >> n >> x;
    vector<int> cards(n);
    int sum = 0;
    for (auto &itr:cards) {
        cin >> itr;
        sum += itr;
    }
    sum = abs(sum);
    if (sum%x==0)
        cout << sum/x << endl;
    else 
        cout << (sum/x) + 1 << endl;

    return 0;
}