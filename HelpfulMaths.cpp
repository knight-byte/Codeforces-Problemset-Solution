#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // declaration of variables and input
    string s1;
    vector<int> arr1;
    string finalString;
    cin >> s1;
    // taking the character of the string and if its a number,
    // adding it into an array, then sorting the array in ascending order.
    for (auto i=s1.begin(); i!=s1.end(); i++) {
        if (*i == '+')
            continue;
        else {  
            int temp = *i;
            arr1.push_back(temp);
        }   
    }
    sort(arr1.begin(), arr1.end());
    // pusing the digits in a new string 
    for (auto i=arr1.begin(); i!=arr1.end(); i++) {
        finalString += *i;
        finalString += "+";
    }
    finalString.pop_back();
    // printing the result and returning 0
    cout << finalString << endl;
    return 0;
}