#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int sum1=0, sum2=0;
        for (int i=0; i<n; i++) {
            int x = s1[i] - '0';
            int y = s2[i] - '0';
            if (x==y) {
                sum1++;
                sum2++;
            }
            else if (x>y)
                sum1++;
            else 
                sum2++;
        }
        if (sum1==sum2)
            cout << "EQUAL\n";
        else if (sum1>sum2)
            cout << "RED\n";
        else if (sum2>sum1)
            cout << "BLUE\n";
    }

    return 0;
}