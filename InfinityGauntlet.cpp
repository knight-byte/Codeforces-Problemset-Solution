#include <bits/stdc++.h>
using namespace std;

int main(void) {
    map<string, string> gems;
    gems.insert(pair<string, string>("purple", "Power"));
    gems.insert(pair<string, string>("green", "Time"));
    gems.insert(pair<string, string>("blue", "Space"));
    gems.insert(pair<string, string>("orange", "Soul"));
    gems.insert(pair<string, string>("red", "Reality"));
    gems.insert(pair<string, string>("yellow", "Mind"));

    int n;
    cin >> n;
    if (n<1) {
        cout << gems.size() << endl;
        for (auto i=gems.begin(); i!=gems.end(); i++) {
            cout << i->second << endl;
        }
    }
    else {
        vector<string> s(n), ans;
        for (auto &x:s)
            cin >> x;
        for (auto itr=gems.begin(); itr!=gems.end(); itr++) {
            bool found = false;
            for (int i=0; i<n; i++) {
                if (itr->first == s[i]) {
                    found = true;
                    break;
                }
            }
            if (found) {
                found = false;
                continue;
            }
            else if (!found) {
                ans.push_back(itr->second);
            }
        }
        cout << ans.size() << endl;
        for (auto &x:ans)
            cout << x << endl;
    }

    return 0;
}