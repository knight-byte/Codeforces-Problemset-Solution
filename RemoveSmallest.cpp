// incomplete
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int length;
    cin >> length;
    vector<vector<int> > vec;
    for (int i=0; i<length; i++) {
        vector<int> v1;
        int subLength;
        cin >> subLength;
        for (int j=0; j<subLength; j++) {
            int num;
            cin >> num;
            v1.push_back(num);
        }
        sort(v1.begin(), v1.end());
        vec.push_back(v1);
    }
    vector<int> res;
    int difference = 0;
    for (long unsigned int i=0; i<vec.size(); i++) {
        if (vec[i].size() == 1) {
            // res.push_back(1);
            continue;
        } 
        for (unsigned long int j=0; j<vec[i].size(); j++) {
            if (vec[i][j] == vec[i][j+1]) {
                vec[i].erase(vec[i].begin() + j);
            }
            else {
                difference = vec[i][j+1] - vec[i][j];
                if (difference == 1) {
                    vec[i].erase(vec[i].begin() + j);
                    continue;
                }
            }
        }
    }
    for (long unsigned int i=0; i<vec.size(); i++) {
        if (vec[i].size() == 1) {
            res.push_back(1);
            cout << vec[i].size() << endl;
        }
        if (vec[i].size() > 1) {
            res.push_back(0);
            cout << vec[i].size() << endl;
        }
    }
    for (int i=0; i<res.size(); i++) {
        if (res[i] == 1)
            cout << "YES\n";
        if (res[i] == 0)
            cout << "NO\n";
    }

    return 0;
}