// Problem : https: // codeforces.com/problemset/problem/1858/A
// Solution : https: // codeforces.com/contest/1858/submission/268823797

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
    ll a, b, c;
    cin >> a >> b >> c;
    if (c & 1)
    {
        if (b > a)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
    else
    {
        if (a > b)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
}

int main()
{
    Boost
        Multiple_Test
        // Single_Test
        return 0;
}