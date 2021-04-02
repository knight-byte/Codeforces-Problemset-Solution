#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int rank=1,sum=0;
    for (int i=0; i<n; i++) {
        vector<int> marks(4);
        int total = 0;
        for (auto &x:marks) {
            cin >> x;
            total += x;
        }
        if (i==0)
            sum = total;
        if (total>sum)
            rank++;
    }
    cout << rank << endl;

    return 0;
}