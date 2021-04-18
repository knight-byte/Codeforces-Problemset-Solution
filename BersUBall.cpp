/*
      .                                                      .
        .n                   .                 .                  n.
  .   .dP                  dP                   9b                 9b.    .
 4    qXb         .       dX                     Xb       .        dXp     t
dX.    9Xb      .dXb    __                         __    dXb.     dXP     .Xb
9XXb._       _.dXXXXb dXXXXbo.                 .odXXXXb dXXXXb._       _.dXXP
 9XXXXXXXXXXXXXXXXXXXVXXXXXXXXOo.           .oOXXXXXXXXVXXXXXXXXXXXXXXXXXXXP
  `9XXXXXXXXXXXXXXXXXXXXX'~   ~`OOO8b   d8OOO'~   ~`XXXXXXXXXXXXXXXXXXXXXP'
    `9XXXXXXXXXXXP' `9XX'   DIE    `98v8P'  HUMAN   `XXP' `9XXXXXXXXXXXP'
        ~~~~~~~       9X.          .db|db.          .XP       ~~~~~~~
                        )b.  .dbo.dP'`v'`9b.odb.  .dX(
                      ,dXXXXXXXXXXXb     dXXXXXXXXXXXb.
                     dXXXXXXXXXXXP'   .   `9XXXXXXXXXXXb
                    dXXXXXXXXXXXXb   d|b   dXXXXXXXXXXXXb
                    9XXb'   `XXXXXb.dX|Xb.dXXXXX'   `dXXP
                     `'      9XXXXXX(   )XXXXXXP      `'
                              XXXX X.`v'.X XXXX
                              XP^X'`b   d'`X^XX
                              X. 9  `   '  P )X
                              `b  `       '  d'
                               `             '
Author		: hellking
File		: BersUBall
Created on	: Sun, 18 April, 2021
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void) {
    int a;
    cin >> a;
    vector<int> boys(a);
    for (auto &x:boys)
        cin >> x;
    int b;
    cin >> b;
    vector<int> girls(b);
    for (auto &y:girls)
        cin >> y;
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int ans = 0;
    for (auto i=boys.begin(); i!=boys.end(); i++) {
        for (auto j=girls.begin(); j!=girls.end(); j++) {
            // cout << *i << " " << *j << endl;
            if (abs(*i-*j)<2) {
                ans++;
                girls.erase(j);
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}