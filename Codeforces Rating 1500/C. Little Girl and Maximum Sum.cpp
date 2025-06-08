// Problem: https://codeforces.com/problemset/problem/276/C
// Solution: https://codeforces.com/contest/276/submission/279374196

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
    int n, q;
    cin >> n >> q;
    vector<int> v(n), freq(n, 0);
    for (auto &i : v)
        cin >> i;

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        freq[l]++;
        if (r < n)
            freq[r]--;
    }
    for (int i = 1; i < n; i++)
        freq[i] += freq[i - 1];
    sort(freq.begin(), freq.end());
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += freq[i] * v[i];
    cout << ans << endl;
}

int32_t main()
{
    Bismillah
        // Multiple_Test
        Single_Test Code_End
}