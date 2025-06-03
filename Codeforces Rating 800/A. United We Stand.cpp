// # Problem: https://codeforces.com/problemset/problem/1859/A
// # Solution: https://codeforces.com/contest/1859/submission/322578661

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
    map<int, int> store;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        store[x]++;
    }
    if (store.size() == 1)
    {
        cout << -1 << endl;
        return;
    }

    int ansf = 0, anss = store.rbegin()->second, b = store.rbegin()->first;
    store.erase(b);
    for (auto i : store)
        ansf += i.second;
    cout << ansf << ' ' << anss << endl;
    for (auto i : store)
    {
        for (int j = 0; j < i.second; j++)
            cout << i.first << ' ';
    }
    cout << endl;
    for (int i = 0; i < anss; i++)
        cout << b << ' ';
    cout << endl;
}

int32_t main()
{
    Bismillah
        Multiple_Test
        // Single_Test
        Code_End
}