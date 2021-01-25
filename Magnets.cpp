#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) 
        cin >> arr[i];
    int counter = 1;
    int result = 0;
    int initialVal = arr[0];
    for (int i=0; i<n; i++) {
        if (arr[i] == initialVal) {
            if (result < counter) 
                result = counter;
            continue;
        }
        else if (arr[i] != initialVal) {
            counter++;
            initialVal = arr[i];
            if (result < counter) 
                result = counter;
        }
    }
    cout << result << endl;

    return 0;
}