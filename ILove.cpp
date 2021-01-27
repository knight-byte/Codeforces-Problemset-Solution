#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int num;
    cin >> num;
    int arr[num];
    for (int i=0; i<num; i++) 
        cin >> arr[i];
    int minNum = arr[0], maxNum = arr[0];
    int counter = 0;
    for (int i=1; i<num; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
            counter++;
        }
        else if (arr[i] < minNum) {
            minNum = arr[i];
            counter++;
        }
    }
    cout << counter << endl;

    return 0;
}