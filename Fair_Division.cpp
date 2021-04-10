#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        int arr[n];
        int count_1 = 0;
        int count_2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                count_1 += 1;
            else
                count_2 += 1;
        }

        if ((count_1 % 2 == 0 && count_1 > 1) || (count_2 > 1 && count_2 % 2 == 0 && count_1 % 2 == 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}