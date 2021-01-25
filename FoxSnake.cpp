// Incomplete
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<string> v1;
    int tail_pos = 1;
    for (int i=0; i<n; i++) {
        string temp;
        for (int j=0; j<m; j++) {
            if (i%2 != 0) 
                temp += "#";
        }
        v1.push_back(temp);
    }

    return 0;
}