// Problem : https: // codeforces.com/problemset/problem/1840/C
// Solution : https: // codeforces.com/contest/1840/submission/267624039

#include <bits/stdc++.h>
using namespace std;

#define Boost ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define Multiple_Test \
    int t;            \
    cin >> t;         \
    while (t--)       \
        solve();
#define Single_Test solve();
#define endl '\n'
#define ll long long

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    ll ans = 0;
    ll len = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= q)
        {
            len += 1;
        }
        else
        {
            if (len >= k)
            {
                ans += (len - k + 1) * (len - k + 2) / 2;
            }
            len = 0;
        }
    }
    if (len >= k)
    {
        ans += (len - k + 1) * (len - k + 2) / 2;
    }
    cout << ans << endl;
}

int main()
{
    Boost
        Multiple_Test
        // Single_Test
        return 0;
}