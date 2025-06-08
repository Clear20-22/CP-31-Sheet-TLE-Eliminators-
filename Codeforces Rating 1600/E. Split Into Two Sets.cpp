// Problme: https://codeforces.com/problemset/problem/1702/E
// Solution: https://codeforces.com/contest/1702/submission/316127103

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

vector<vector<int>> adj;
vector<int> color;

bool dfs(int u, int c)
{
    color[u] = c;
    for (int v : adj[u])
    {
        if (color[v] == -1)
        {
            if (!dfs(v, 1 - c))
                return false;
        }
        else if (color[v] == color[u])
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    vector<array<int, 2>> domino(n);
    vector<vector<int>> number_to_domino(n + 1);

    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        domino[i] = {a, b};
        number_to_domino[a].push_back(i);
        number_to_domino[b].push_back(i);
    }

    adj.assign(n, {});
    for (int num = 1; num <= n; ++num)
    {
        if (number_to_domino[num].size() > 2)
        {
            cout << "NO" << endl;
            return;
        }
        if (number_to_domino[num].size() == 2)
        {
            int u = number_to_domino[num][0];
            int v = number_to_domino[num][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    color.assign(n, -1);
    for (int i = 0; i < n; ++i)
    {
        if (color[i] == -1)
        {
            if (!dfs(i, 0))
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
}

int32_t main()
{
    Bismillah
        Multiple_Test
        // Single_Test
        Code_End
}