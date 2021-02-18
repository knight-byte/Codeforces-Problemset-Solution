#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // variable declaration and input
    int t;
    cin >> t;
    vector<int> sol;
    while (t--) {
        int n;
        cin >> n;
        // i just guessed and it was correct lol
        if (n==1)
            sol.push_back(1);
        else if (n%2!=0)
            sol.push_back(n/2 + 1);
        else if (n%2==0)
            sol.push_back(n/2);
    }
    for (auto &x:sol)
        cout << x << endl;

    return 0;
}