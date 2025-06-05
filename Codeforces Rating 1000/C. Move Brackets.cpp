// Problem : https: // codeforces.com/problemset/problem/1374/C
// Solution : https : // codeforces.com/contest/1374/submission/277083370

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
    int n, k = 1;
    cin >> n;
    string s;
    cin >> s;
    stack<char> c;
    for (char v : s)
    {
        if (k and v == ')')
            c.push(v);
        else if (v == '(' and k)
            k = 0, c.push(v);
        else if (c.size() and c.top() == '(' and v == ')' and !k)
            c.pop();
        else
            c.push(v);
    }
    cout << c.size() / 2 << endl;
}

int main()
{
    Bismillah
        Multiple_Test
        // Single_Test
        Code_End
}