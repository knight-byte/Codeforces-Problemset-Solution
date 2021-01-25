#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string num1, num2;
    cin >> num1 >> num2;
    string res;
    for (int i=0; i<num1.size(); i++) {
        if (num1[i] == num2[i])
            res += "0";
        else 
            res += "1";
    }
    cout << res << endl;

    return 0;
}