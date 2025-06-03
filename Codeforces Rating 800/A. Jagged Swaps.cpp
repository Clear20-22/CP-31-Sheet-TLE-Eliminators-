// # Problem: https://codeforces.com/problemset/problem/1896/A
// # Solution: https://codeforces.com/contest/1896/submission/291496134

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
    vector<int> v(n);
    set<int> st;
    for (auto &i : v)
    {
        cin >> i;
        st.insert(i);
    }

    if (st.size() != n or v[0] != 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int32_t main()
{
    Bismillah
        Multiple_Test
        // Single_Test
        Code_End
}