#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string myCard;
    cin >> myCard;
    vector<string> deck(5);
    for (auto &x:deck)
        cin >> x;
    bool state = false;
    for (int i=0; i<deck.size(); i++) {
        if (myCard[0] == deck[i][0] || myCard[1] == deck[i][1]) {
            state = true;
            break;
        }
        else 
            continue;
    }
    if (state)
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}