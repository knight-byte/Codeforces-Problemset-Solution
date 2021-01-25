#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int question, time;
    cin >> question >> time;
    const int remainingTime = 240;
    int totalTime = time;
    int counter = 0;
    for (int i=0; i<question; i++) {
        if (totalTime < remainingTime) {
            totalTime += 5*(i+1);
            counter++;
            if (totalTime > remainingTime)
                counter--;
        }    
    }
    cout << counter << endl;

    return 0;
}