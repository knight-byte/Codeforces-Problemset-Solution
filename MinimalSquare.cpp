#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // variable declaration and input
    int t;
    cin >> t;
    vector<int> ans;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // both rectangles should touch one of the sides
        int side = min(max(2*a, b), max(a, 2*b)); 
        ans.push_back(side*side); // area of square
    }

    // output and returning 0
    for (auto i=ans.begin(); i!=ans.end(); i++) 
        cout << *i << endl;

    return 0;
}