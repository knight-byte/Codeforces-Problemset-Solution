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
File        : NekoGrapes
Created on  : Wed, 21 April, 2021
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (auto &x:a)
        cin >> x;
    for (auto &y:b)
        cin >> y;
    int c0=0, c1=0;
    for (int i=0; i<n; i++) {
        if (a[i]%2==0)
            c0 += 1;
        else 
            c1 += 1;
    }

    int k0=0, k1=0;
    for (int i=0; i<m; i++) {
        if (b[i]%2==0)
            k0++;
        else
            k1++;
    }
    int ans = min(c0, k1) + min(c1, k0);
    cout << ans << endl;

    return 0;
}