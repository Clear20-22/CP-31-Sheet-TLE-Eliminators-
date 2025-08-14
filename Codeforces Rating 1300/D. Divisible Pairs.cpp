// Problem: https://codeforces.com/problemset/problem/1931/D
// Solution: https://codeforces.com/contest/1931/submission/333747856

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
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    map<pair<int,int>, int> cnt;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int need_x = (x - v[i] % x) % x; 
        int need_y = v[i] % y;           

        ans += cnt[{need_x, need_y}];

        cnt[{v[i] % x, v[i] % y}]++;
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