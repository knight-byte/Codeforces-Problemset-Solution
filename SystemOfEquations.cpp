#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i=0; i<=n/2+1; i++) {
        for (int j=0; j<=m/2+1; j++) {
            int x = i*i + j;
            int y = i + j*j;
            if (x==n && y==m)
                count++;
        }
    }
    cout << count << endl;

    return 0;
}