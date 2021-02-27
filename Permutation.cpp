#include <bits/stdc++.h>
using namespace std;
// I get correct answers on my machine, but wrong answers on the Codeforces platform.
// The solution is correct tho
int main(void) {
    // variable declaration and input
    int t;
    cin >> t;
    vector<vector<int> > res;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(2*n);
        unordered_set<int> sol; // using unordered sets because we have to maintain the order of the numbers
        for (auto &x:arr)
            cin >> x;
        for (auto i=arr.begin(); i!=arr.end(); i++) 
            sol.insert(*i);
        vector<int> temp;
        for (auto &x:sol)
            temp.push_back(x);
        // idk why but the numbers are automatically reversed when using unordered sets.
        reverse(temp.begin(), temp.end()); 
        res.push_back(temp);
    }
    for (int i=0; i<res.size(); i++) {
        for (int j=0; j<res[i].size(); j++) 
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
}
// Bruh moment, tried another method, but it keeps on failing
// will improve later.
/*
#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int l, int r, int x) {
    if (r>1) {
        int mid = l+(r-l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binary_search(arr, l, mid-1, x);
        return binary_search(arr, mid+1, r, x);
    }
    return -1;
}

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(2*n);
        for (auto &x:arr)
            cin >> x;
        vector<int> ans;
        ans.push_back(arr[0]);
        for (int i=1; i<arr.size(); i++) {
            int state = binary_search(ans, 0, ans.size(), arr[i]);
            if (state == -1)
                ans.push_back(arr[i]);
            else 
                continue;
        }
        for (auto &x:ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
*/