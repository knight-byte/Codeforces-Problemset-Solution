#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int stops; // number of stops the tram will make
    cin >> stops;
    // vector of passengers, that are exiting and entering
    // the tram. The index is the stop number
    vector<int> exit(stops);
    vector<int> enter(stops);
    for (int i=0; i<stops; i++) {
        cin >> exit[i] >> enter[i];
    }
    // finding the number of max capacity of the tram
    int sum = 0, maxCapacity = 0;
    for (int i=0; i<stops; i++) {
        sum = (sum - exit[i]) + enter[i];
        if (sum >= maxCapacity)
            maxCapacity = sum;
    }
    // prinitng the result and returning 0
    cout << maxCapacity << endl;
    return 0;
}