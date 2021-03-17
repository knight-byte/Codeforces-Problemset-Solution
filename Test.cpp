#include <bits/stdc++.h>
using namespace std;

// Binary Search
int binary_search(vector<int> arr, int l, int r, int x) {
    // If rightmost element is greater than or equal to 1, then only we can search the array
    if (r>=1) {
        // mid position = left + (right - left) / 2
        int mid = l+(r-l)/2;
        // if element is present at the midpoint, return mid
        if (arr[mid] == x)
            return mid;
        // if the element is smaller than the mid point, then it maybe present on the left
        if (arr[mid]>x)
            return binary_search(arr, l, mid-1, x);
        // else it maybe on the right of the midpoint
        return binary_search(arr, mid+1, r, x);
    }
    return -1;
}

int main(void) {
    // convet a char which is a number to int
    /*
    char a = '5';
    int ia = a - '0';
    cout << ia << endl;
    */

    // convert a number to string
    /*
    int a = 125;
    string str = to_string(a);
    cout << str << endl;
    */

    // Binary Search
    /*
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x:arr)
        cin >> x;
    sort(arr.begin(), arr.end());
    cout << "Enter the element to search: ";
    int x;
    cin >> x;
    int result = binary_search(arr, 0, n-1, x);
    if (result == -1)
        cout << "Element not present\n";
    else 
        cout << "Element present at index " << result << endl;
    */
   // kek
    char a = 'a';
    a += 1;
    cout << a << endl;

    return 0;
}