// Problem : https://codeforces.com/contest/1475/problem/A
// Solution : https: // codeforces.com/contest/1475/submission/282680016

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
    int a;
    cin >> a;

    if (a & (a - 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    Bismillah
        Multiple_Test
        // Single_Test
        Code_End
}