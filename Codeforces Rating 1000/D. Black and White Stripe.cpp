// Problem : https: // codeforces.com/problemset/problem/1690/D
// Solution : https: // codeforces.com/contest/1690/submission/268134242

#include <bits/stdc++.h>
using namespace std;
#define Boost ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define Multiple_Test \
    int t;            \
    cin >> t;         \
    while (t--)       \
        solve();
#define ll long long

void solve()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    vector<int> pf(a + 1, 0);
    for (int i = 0; i < a; i++)
    {
        if (s[i] == 'B')
            pf[i + 1] = pf[i];
        else
            pf[i + 1] = pf[i] + 1;
    }

    int ans = a;
    for (int i = 1; i <= a - b + 1; i++)
    {
        ans = min(ans, pf[i + b - 1] - pf[i - 1]);
    }

    cout << ans << endl;
}

int main()
{
    Boost
        Multiple_Test return 0;
}