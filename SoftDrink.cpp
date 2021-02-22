#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink=0, limes=0, salt=0;
    drink = (k*l)/nl;
    limes = c*d;
    salt = p/np;
    vector<int> ans;
    ans.push_back(drink);
    ans.push_back(limes);
    ans.push_back(salt);
    int result = *min_element(ans.begin(), ans.end());
    cout << result/n << endl;

    return 0;
}