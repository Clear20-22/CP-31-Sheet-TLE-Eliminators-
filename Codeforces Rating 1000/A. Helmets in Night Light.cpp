// Problem: https://codeforces.com/contest/1876/problem/A
// Solution: https://codeforces.com/contest/1876/submission/332415431

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
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> a(n);

    for(auto &x : a) {
        cin >> x.first;
    }
    for(auto &x : a) {
        cin >> x.second;
    }

    sort(a.begin(), a.end(), [](pair<int,int> &x, pair<int,int> &y) {
        return x.second < y.second;
    });

    int ans = m;
    n -= 1;

    for (pair<int, int> i : a) {
        if (n > 0 and i.second <= m and n >= i.first) {
            ans += i.first*i.second;
            n -= i.first;
        } else if (n > 0 and i.second <= m and n < i.first) {
            ans += n * i.second;
            n = 0;
        } else {
            ans += n * m;
            n = 0;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}