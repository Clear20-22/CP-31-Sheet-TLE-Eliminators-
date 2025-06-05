// Problem : https: // codeforces.com/problemset/problem/1791/D
// Solution : https: // codeforces.com/contest/1791/submission/268308529

#include <bits/stdc++.h>
using namespace std;

#define Boost ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define Multiple_Test \
    int t;            \
    cin >> t;         \
    while (t--)       \
        solve();
#define endl '\n'
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    map<char, ll> left_map, right_map;
    vector<ll> left_count(n + 1, 0), right_count(n + 1, 0);

    for (ll i = 0; i < n; ++i)
    {
        left_map[s[i]]++;
        if (left_map[s[i]] == 1)
        {
            left_count[i + 1] = left_count[i] + 1;
        }
        else
        {
            left_count[i + 1] = left_count[i];
        }
    }
    for (ll i = n - 1, j = 0; i >= 0; --i, ++j)
    {
        right_map[s[i]]++;
        if (right_map[s[i]] == 1)
        {
            right_count[j + 1] = right_count[j] + 1;
        }
        else
        {
            right_count[j + 1] = right_count[j];
        }
    }

    ll max_unique = 0;
    for (ll i = 1; i <= n; ++i)
    {
        max_unique = max(max_unique, left_count[i] + right_count[n - i]);
    }

    cout << max_unique << endl;
}

int main()
{
    Boost
        Multiple_Test return 0;
}