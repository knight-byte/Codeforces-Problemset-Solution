#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int pen=0, pencil=0;
        if (a%c!=0 || a<c)
            pen = a/c + 1;
        else 
            pen = a/c;
        if (b%d!=0 || b<d)
            pencil = b/d + 1;
        else 
            pencil = b/d;
            
        if (pen+pencil <= k)
            cout << pen << " " << pencil << endl;
        else 
            cout << -1 << endl;
    }
}