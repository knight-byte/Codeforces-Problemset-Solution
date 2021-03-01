#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int y, w;
    cin >> y >> w;
    int res = max(y, w);
    int num = (6-res) + 1;
    if (num==1)
        cout << num << "/" << 6;
    else if (num==2) 
        cout << 1 << "/" << 3;
    else if (num==3)
        cout << 1 << "/" << 2;
    else if (num==4)
        cout << 2 <<"/" << 3;
    else if (num==5)
        cout << 5 << "/" << 6;
    else if (num==6)
        cout << 1 << "/" << 1;
    cout << endl;

    return 0;
}