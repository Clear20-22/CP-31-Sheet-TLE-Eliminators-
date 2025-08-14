// Problem: https://codeforces.com/problemset/problem/1594/C
// Solution: https://codeforces.com/contest/1594/submission/266566606

#include <bits/stdc++.h>
using namespace std;
#define Boost ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define Multiple_Test \
    int t;            \
    cin >> t;         \
    while (t--)       \
        solve();
#define Single_Test solve();
#define ll long long

void solve()
{
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    bool allC = true;
    for (char ch : s)
    {
        if (ch != c)
        {
            allC = false;
            break;
        }
    }

    if (allC)
    {
        cout << 0 << endl;
        return;
    }

    vector<int> possible_x;
    for (int x = 1; x <= n; ++x)
    {
        bool valid = true;
        for (int i = x; i <= n; i += x)
        {
            if (s[i - 1] != c)
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            possible_x.push_back(x);
        }
    }

    if (!possible_x.empty())
    {
        cout << 1 << endl;
        cout << possible_x[0] << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << n << " " << n - 1 << endl;
    }
}

int main()
{
    Boost
        Multiple_Test
        // Single_Test  
        return 0;
}