// Problem : https: // codeforces.com/problemset/problem/1474/B
// Solution : https: // codeforces.com/contest/1474/submission/282677372

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

vector<int> prime;
vector<int> vis(1000000, 0);

void get()
{
    for (int i = 2; i < 1000000; i++)
    {
        if (!vis[i])
        {
            prime.push_back(i);
            for (int j = 2 * i; j < 1000000; j += i)
                vis[j] = true;
        }
    }
}

void solve()
{
    int a;
    cin >> a;
    int p = *lower_bound(prime.begin(), prime.end(), 1 + a);
    int q = *lower_bound(prime.begin(), prime.end(), p + a);
    cout << p * q << endl;
}

int32_t main()
{
    Bismillah
    get();
    Multiple_Test
        // Single_Test
        Code_End
}