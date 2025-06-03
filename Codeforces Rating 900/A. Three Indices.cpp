// Problem : https: // codeforces.com/problemset/problem/1380/A
// Solution : https : // codeforces.com/contest/1380/submission/288778886

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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] < v[i] and v[i] > v[i + 1])
        {
            cout << "YES" << endl;
            cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int32_t main()
{
    Bismillah
        Multiple_Test
        // Single_Test
        Code_End
}