#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> ans, store(n);
    set<int> exist;
    for (auto &x:store)
        cin >> x;
    reverse(store.begin(), store.end());
    for (int i=0; i<n; i++) {
        if (count(exist.begin(), exist.end(), store[i])>0)
            continue;
        else {
            ans.push_back(store[i]);
            exist.insert(store[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto &x:ans)
        cout << x << " ";
    cout << endl;

    return 0;
}