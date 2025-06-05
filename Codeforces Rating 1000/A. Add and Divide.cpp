// Problem : https: // codeforces.com/problemset/problem/1485/A
// Solution : https: // codeforces.com/contest/1485/submission/282635242

#include <bits/stdc++.h>
using namespace std;

#define Bismillah ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define Multiple_Test \
    int t;            \
    cin >> t;         \
    while (t--)       \
        solve();
#define Single_Test solve();
#define Code_End return 0;
#define endl '\n'
#define int long long
#define MOD 1000000007
#define INF numeric_limits<int>::max()

void solve()
{

    int a, b;
    cin >> a >> b;
    int ans = INF;
    for (int i = 0; i < 50; i++)
    {
        int count = 0, x = a;
        if (b + i == 1)
            continue;
        count = i;
        while (x)
            count++, x /= b + i;

        ans = min(ans, count);
    }
    cout << ans << endl;
}

int32_t main()
{
    Bismillah
        Multiple_Test
        // Single_Test
        Code_End
}