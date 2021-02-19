#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<char> arr;
    for (int i=0; i<n*m; i++) {
        char temp;
        cin >> temp;
        arr.push_back(temp);
    }
    bool state = false;
    for (auto &x:arr) {
        // color only when one of the following is present
        if (x=='C' || x=='M' || x=='Y') {
            state = true;
            break;
        }
        else 
            continue;
    }
    if (state)
        cout << "#Color\n";
    else 
        cout << "#Black&White\n";

    return 0;
}