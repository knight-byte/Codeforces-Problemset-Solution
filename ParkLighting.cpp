#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<int> ans;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int park = n*m;
        // required lights, 1 light covers 2 cubes
        // if park size is odd, then lights = half the size of park + 1
        // if park size is even, then lights = half the size of park
        if (park == 1)
            ans.push_back(1);
        else if (park%2==0)
            ans.push_back(park/2);
        else 
            ans.push_back(park/2 + 1);
    }
    for (auto &x:ans)
        cout << x << endl;

    return 0;
}