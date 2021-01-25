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
        vec.push_back(v1);
    }
    for (int i=0; i<vec.size(); i++) {
        for (int j=0; j<vec[i].size(); j++) {
            
        }
    }

    return 0;
}