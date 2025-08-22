// Problem: https://codeforces.com/problemset/problem/1873/E?csrf_token=e625121b4b0722822497f8d697ef9f11
// Solution: https://codeforces.com/contest/1873/submission/334778265

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
#include <bitset>
#include <deque>
#include <list>
#include <cassert>
#include <random>
#include <functional>
#include <tuple>
using namespace std;

#define Bismillah ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Multiple_Test int t; cin >> t; while (t--) solve();
#define Single_Test solve();
#define Code_End return 0;
#define endl '\n'
#define int long long
#define MOD 10000000007
#define INF numeric_limits<int>::max()

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n),sum(n+1,0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } 

    sort(a.begin(), a.end());

    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + a[i - 1];
    }

    int lo = 0, hi = MOD;
    int ans = 0;

    while(lo < hi){
        int mid = (lo + hi) / 2;
        int idx = upper_bound(a.begin(), a.end(), mid) - a.begin();
        int grid = mid*n - sum[idx] - 1ll * (n - idx) * mid;
        if (grid <= m) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }

    cout << ans <<endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}