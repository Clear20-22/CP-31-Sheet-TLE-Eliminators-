// Problem : https: // codeforces.com/problemset/problem/1853/A
// Solution: https://codeforces.com/contest/1853/submission/270079153

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
#define MOD 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    if (!is_sorted(v.begin(), v.end()))
    {
        cout << 0 << endl;
        return;
    }
    int check = MOD, pos1, pos2;
    for (int i = 0; i < n - 1; i++)
    {
        check = min(check, v[i + 1] - v[i]);
    }
    cout << (check + 2) / 2 << endl;
}

int main()
{
    Boost
        Multiple_Test
        // Single_Test
        return 0;
}