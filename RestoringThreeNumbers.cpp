#include <bits/stdc++.h>
using namespace std;

int main(void) { 
    // Declaring variables
    const int num = 4;
    vector<int> arr;
    vector<int> sol;
    
    // Input   
    int input;
    while (cin >> input) // It will keep on taking input untill there's an EOF, for manual test cases, press CTRL+D after giving all the inputs
        arr.push_back(input);

    // Sorting the array, for obtaining the sum of all the three numbers.
    sort(arr.begin(), arr.end()); 

    // Main Logic
    for (auto i=arr.begin(); i!=arr.end(); i++) {
        if (*i != arr[num-1]) {
            int temp = 0;
            temp = arr[num-1] - *i;
            // cout << temp << " " << arr[num-1] << " " << *i << endl;
            sol.push_back(temp);
        }
        else
            break;
    }
    for (auto i=sol.begin(); i!=sol.end(); i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}