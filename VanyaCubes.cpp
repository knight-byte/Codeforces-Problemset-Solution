#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int count=0, h=0, i=1, total=0;
    while (total <= n) {
        count += i;
        total += count;
        i++;
        h++; 
    }
    if (h==1)
        cout << h << endl;
    else 
        cout << h-1 << endl;

    return 0;
}