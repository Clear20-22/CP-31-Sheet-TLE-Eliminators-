// Problem : https: // codeforces.com/problemset/problem/1900/A

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
    string s;
    cin >> s;
    int track = 0;

    vector<int> ans;
    for (char i : s)
    {
        if (i == '#' and track)
            ans.push_back(track), track = 0;
        else if (i == '.')
            track++;
    }

    if (track)
        ans.push_back(track);

    if (ans.empty())
        cout << "0" << endl;
    else
    {
        int t = 0;

        for (int i : ans)
        {
            if (i >= 3)
            {
                cout << 2 << endl;
                return;
            }
            else
                t += i;
        }
        cout << t << endl;
    }
}

int32_t main()
{
    Bismillah
        Multiple_Test
        // Single_Test
        Code_End
}