// Problem: https://codeforces.com/problemset/problem/1704/B
// Solution: https://codeforces.com/contest/1704/submission/332646752

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
#define MOD 1000000007
#define INF numeric_limits<int>::max()

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    int ans = 0;
    int l = a[0] - x, r = a[0] + x;
    for(int i = 1; i < n; ++i) {
        int nl = a[i] - x, nr = a[i] + x;
        l = max(l, nl);
        r = min(r, nr);
        if(l > r) {
            ans++;
            l = nl;
            r = nr;
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