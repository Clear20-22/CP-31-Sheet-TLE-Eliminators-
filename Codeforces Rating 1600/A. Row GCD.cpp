// Problem: https://codeforces.com/contest/1458/problem/A
// Solution: https://codeforces.com/contest/1458/submission/297077952

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
    int n, m;
    cin >> n >> m;
    vector<int> v(n), b(m), dif;
    for (auto &i : v)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
        dif.push_back(v[i] - v[0]);
    int g = 0;
    for (int i : dif)
        g = __gcd(g, i);
    for (int i : b)
    {
        cout << __gcd(g, v[0] + i) << ' ';
    }
}

int32_t main()
{
    Bismillah
        // Multiple_Test
        Single_Test Code_End
}