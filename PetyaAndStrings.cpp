#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // string declaration and input
    string str1, str2;
    cin >> str1 >> str2;
    // converting the strings to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    // main logic, defined in the question
    int result = 0;
    if (str1 == str2)
        result = 0;
    else if (str1 >= str2)
        result = 1;
    else
        result = -1;
    // printing result and returning 0 
    cout << result << endl;
    return 0;
}