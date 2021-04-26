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
 
Author      : hellking
File        : SpyDetected
Created on  : Fri, 23 April, 2021
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    // solved using two methods
    // both are correct
    // method 1
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x:a) 
            cin >> x;
        for (int i=0; i<n; i++) {
            int cnt = count(a.begin(), a.end(), a[i]);
            if (cnt==1) {
                cout << i+1 << endl;
                break;
            }
        }
    }
    // method 2
    /*
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x:a)
            cin >> x;
        for (int i=0; i<n; i++) {
            if (i==0) {
                if (a[i]!=a[i+1] && a[i]!=a[i+2]) {
                    cout << i+1 << endl;
                    break;
                }
            }
            else if (i==n-1) {
                if (a[n-1]!=a[n-2] && a[n-1]!=a[n-3]) {
                    cout << i+1 << endl;
                    break;
                }
            }
            else {
                if (a[i]!=a[i+1] && a[i]!=a[i-1]) {
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
    */

    return 0;
}