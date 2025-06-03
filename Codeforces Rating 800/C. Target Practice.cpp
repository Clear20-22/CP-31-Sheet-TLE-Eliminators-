// Problem : https: // codeforces.com/problemset/problem/1873/C
// Solution : https: // codeforces.com/contest/1873/submission/260695526

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char a;
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> a;
            if (((i == 0 or i == 9) and (j >= 0 and j <= 9)) and a == 'X')
                ans += 1;
            else if ((j == 0 or j == 9) and a == 'X')
                ans += 1;
            else if (((i == 1 or i == 8) and (j >= 1 and j <= 8)) and a == 'X')
                ans += 2;
            else if ((j == 1 or j == 8) and a == 'X')
                ans += 2;
            else if (((i == 2 or i == 7) and (j >= 2 and j <= 7)) and a == 'X')
                ans += 3;
            else if ((j == 2 or j == 7) and a == 'X')
                ans += 3;
            else if (((i == 3 or i == 6) and (j >= 3 and j <= 6)) and a == 'X')
                ans += 4;
            else if ((j == 3 or j == 6) and a == 'X')
                ans += 4;
            else if (((i == 4 or i == 5) and (j >= 4 and j <= 5)) and a == 'X')
                ans += 5;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}