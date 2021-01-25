#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int questions;
    cin >> questions;
    int inputs[questions][3];
    // Taking Input
    for (int i=0; i<questions; i++) { 
        for (int j=0; j<3; j++) {
            cin >> inputs[i][j];
        }
    }
    // Main logic
    int memberCount=0, questionCount=0;
    for (int i=0; i<questions; i++) {
        memberCount = 0;
        for (int j=0; j<3; j++) {
            if (inputs[i][j] == 1) 
                memberCount++;
        }
        if (memberCount >= 2)
            questionCount++;
    }
    cout << questionCount << endl;

    return 0;
}