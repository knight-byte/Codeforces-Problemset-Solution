#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    vector<int> host, guest;
    for (int i=0; i<2*t; i++) {
        int temp;
        cin >> temp;
        if (i%2!=0)
            host.push_back(temp);
        else 
            guest.push_back(temp);
    }
    int count = 0;
    for (int i=0; i<host.size(); i++) {
        for (int j=0; j<guest.size(); j++) {
            if (host[i] == guest[j])
                count++;
        }
    }
    cout << count << endl;

    return 0;
}