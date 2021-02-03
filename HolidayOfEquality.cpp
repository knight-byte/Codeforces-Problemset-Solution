#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // variable declaration and input
    int num;
    cin >> num;
    const int numVal = num;
    vector<int> arr;
    int res=0, maxVal=0;
    while (num--) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // sorting the array for easier access
    sort(arr.begin(), arr.end());
    
    // main logic
    maxVal = arr[(numVal-1)];
    for (auto i=arr.begin(); i!=arr.end(); i++) 
        res += (maxVal - *i);

    // output and returning 0
    cout << res << endl;
    return 0;
}