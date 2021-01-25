#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int questions, pos, mark, passedParticipants=0;
    cin >> questions >> pos;
    vector<int> marks;
    for (int i=0; i<questions; i++) {
        cin >> mark;
        marks.push_back(mark);
    }
    int minMarks = marks[pos-1];
    // cout << minMarks << endl;
    for (auto i=marks.begin(); i!=marks.end(); i++) {
        if (*i > 0) {
            if (*i >= minMarks)
            passedParticipants++;
        }
    }
    cout << passedParticipants << endl;

    return 0;
}