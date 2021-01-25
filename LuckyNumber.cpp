// This runs correctly here, but doesn't on the Codeforces platform.
#include<bits/stdc++.h>
using namespace std;

int main(void) {
    long int num;
    cin >> num;
    string number;
    int counter = 0;
    number = to_string(num);
    for (int i=0; i<number.size(); i++) {
        if ((number[i] == '4') || (number[i] == '7'))
            counter += 1;
    }
    if ((counter == 4) || (counter == 7))
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}