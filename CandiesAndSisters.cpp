#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int num;
    cin >> num;
    int arr[num];
    for (int i=0; i<num; i++)
        cin >> arr[i];
    for (int i=0; i<num; i++) {
        if (arr[i] < 3)
            cout << 0 << endl;
        else if (arr[i]%2 == 0)
            cout << (arr[i]/2 - 1) << endl;
        else 
            cout << arr[i]/2 << endl;
    }

    return 0;
}