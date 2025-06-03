// Problem : https: // codeforces.com/problemset/problem/1807/D
// Solution : https: // codeforces.com/contest/1807/submission/274139983

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
#define ll long long
#define MOD 1000000007
#define INF numeric_limits<ll>::max()

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> odd(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        odd[i] += odd[i - 1];
        if (x & 1)
            odd[i]++;
    }
    //  cout<<odd[n];
    while (m--)
    {
        int tot = odd[n];
        int a, b, c;
        cin >> a >> b >> c;
        if (a - 1 > 0)
        {
            tot -= odd[b] - odd[a - 1];
        }
        else
            tot -= odd[b];
        if (c & 1)
        {
            tot += (b - a + 1);
        }
        if (tot & 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    Bismillah
        Multiple_Test
        // Single_Test
        Code_End
}