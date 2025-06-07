// Problem: https://codeforces.com/problemset/problem/1820/B
// Solution: https://codeforces.com/contest/1820/submission/317258593

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
    string s;
    cin >> s;

    int k = 0, n = s.size(), fin = 0;
    s += s;
    for (char c : s)
    {
        k = c == '1' ? k + 1 : 0;
        fin = max(fin, k);
    }

    if (fin > n)
        cout << n * n << endl;
    else
    {
        cout << (fin + 1) * (fin + 1) / 4 << endl;
    }
}

int32_t main()
{
    Bismillah
        Multiple_Test
        // Single_Test
        Code_End
}