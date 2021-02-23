#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n);
    int serej=0, dima=0;
    for (auto &x:arr)
        cin >> x;
    int right = n-1;
    int left = 0;
    // tried many methods but it kept adding up all the numbers.
    // looked up on the internet and found that it is better to keep track of the index tham rather using the variable of the loop.
    for (int i=0; i<n; i++) {
        if (i%2==0) {
            if (arr[right] > arr[left]) {
                serej += arr[right];
                right--;
            }
            else if (arr[left] > arr[right]) {
                serej += arr[left];
                left++;
            }
            else 
                serej += arr[left];
        }
        else {
            if (arr[right] > arr[left]) {
                dima += arr[right];
                right--;
            }
            else if (arr[left] > arr[right]) {
                dima += arr[left];
                left++;
            }
            else 
                dima += arr[left];
        }
    }
    cout << serej << " " << dima << endl;

    return 0;
}