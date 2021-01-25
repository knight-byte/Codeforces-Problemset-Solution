#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string male = "IGNORE HIM!\n";
    string female = "CHAT WITH HER!\n";
    // taking input
    string userName;
    cin >> userName;
    // using set, since we only need unique characters from the username
    set<char> s1;
    for (auto i=userName.begin(); i!=userName.end(); i++) {
        s1.insert(*i);
    }
    int result = s1.size();
    // self-explanatory
    if (result%2==0)
        cout << female;
    else 
        cout << male;

    return 0;
}