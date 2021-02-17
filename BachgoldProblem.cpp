#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> sol;
    for (int i=0; i<n/2; i++) {
        sol.push_back(2);
    }
    if (n%2!=0) {
        sol.pop_back();
        sol.push_back(3);
    }
    cout << sol.size() << endl;
    for (auto &x:sol) 
        cout << x << " ";
    cout << endl;

    return 0;
}