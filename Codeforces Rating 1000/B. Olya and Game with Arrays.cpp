// Problem: https://codeforces.com/problemset/problem/1859/B
// Solution: https://codeforces.com/contest/1859/submission/332443213


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <limits>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <sstream>
#include <numeric>
using namespace std;

#define Bismillah ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Multiple_Test int t; cin >> t; while (t--) solve();
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
    int mini = INF;
    vector<vector<int>> a(n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        a[i].resize(m);
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mini = min(mini, a[i][j]);
        }

        sort(a[i].begin(), a[i].end());
        ans.push_back(a[i][1]);
    }

    sort(ans.begin(), ans.end());

    int fin = accumulate(ans.begin(), ans.end(), 0LL);

    cout << fin + mini - ans[0] << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}