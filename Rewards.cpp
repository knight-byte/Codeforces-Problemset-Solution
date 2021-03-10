#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> cups(3), medals(3);
    int totCups=0, totMeds=0;
    for (auto &x:cups) {
        cin >> x;
        totCups += x;
    }
    for (auto &y:medals) {
        cin >> y;
        totMeds += y;
    }
    int n;
    cin >> n;
    if (((totCups+4)/5)+((totMeds+9)/10)>n)
        cout << "NO\n";
    else {
        cout << "YES\n";
    }

    return 0;
}