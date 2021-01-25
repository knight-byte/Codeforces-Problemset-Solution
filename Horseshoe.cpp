#include <bits/stdc++.h>
using namespace std;

int main(void) {
    const int num = 4;
    int arr[num];
    for (int i=0; i<num; i++)
        cin >> arr[i];
    set<int> tiger;
    for (int i=0; i<num; i++)
        tiger.insert(arr[i]);
    cout << num - tiger.size() << endl;

    return 0;
}