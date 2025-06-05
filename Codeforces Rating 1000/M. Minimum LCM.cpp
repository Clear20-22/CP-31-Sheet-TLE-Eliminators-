// Problem : https: // codeforces.com/problemset/problem/1765/M
// Solution : https: // codeforces.com/contest/1765/submission/266303821

#include <bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define multi_test \
    int t;         \
    cin >> t;      \
    while (t--)    \
        solve();
#define single_test solve();
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans = n / i;
            break;
        }
    }
    cout << ans << ' ' << n - ans << endl;
}

int main()
{
    boost
        multi_test
        // single_test
        return 0;
}