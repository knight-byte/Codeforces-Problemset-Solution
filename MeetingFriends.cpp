#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // variable declaration and input
    vector<int> v;
    int temp;
    while (cin >> temp)
        v.push_back(temp);
    
    // sorting the vector for better access of elements
    sort(v.begin(), v.end());

    // self explanatory
    int answer = (v[1] - v[0]) + (v[2] - v[1]);
    
    // output
    cout << answer << endl;

    return 0;
}