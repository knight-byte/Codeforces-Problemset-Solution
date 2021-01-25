#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int games;
    string result;
    cin >> games >> result;
    int anton = 0, danik = 0;
    for (int i=0; i<games; i++) {
        if (result[i] == 'A')
            anton++;
        else if (result[i] == 'D')
            danik++;
    }
    if (anton > danik)
        cout << "Anton\n";
    else if (danik > anton)
        cout << "Danik\n";
    else if (anton == danik)
        cout << "Friendship\n";

    return 0;
}