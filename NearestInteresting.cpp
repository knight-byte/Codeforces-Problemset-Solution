#include <bits/stdc++.h>
using namespace std;

int solve(int x) {
    string s = to_string(x);
    int cnt = 0;
    for (int i=0; i<s.size(); i++)
        cnt += s[i] - '0';
    
    return cnt;
}

int main(void) {
    int n;
    cin >> n;
    int temp = solve(n);
    while (temp%4!=0) {
        n++;
        temp = solve(n);
    }
    cout << n << endl;
    return 0;
}