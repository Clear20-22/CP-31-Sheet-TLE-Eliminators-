// Problem: https://codeforces.com/problemset/problem/1869/B
// Solution: https://codeforces.com/contest/1869/submission/334954049


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
#define MOD 1000000000000007
#define INF numeric_limits<int>::max()

void solve()
{
    int n,k,a,b;
    cin >> n >> k >> a >> b;

    vector<pair<int, int>> v(n),store;
    pair<int, int> start, end;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        if(i < k)
        {
            store.push_back(v[i]);
        }
        if(a == i+1)
        {
            start = v[i];
        }
        if(b == i+1)
        {
            end = v[i];
        }
    }

    int ans1 = MOD, ans2 = MOD;

    for (auto [x, y] : store)
    {
        ans1 = min(ans1, abs(x - start.first) + abs(y - start.second));
        ans2 = min(ans2, abs(x - end.first) + abs(y - end.second));
    }

    int ans = min(abs(start.first - end.first) + abs(start.second - end.second) , ans1 + ans2);
    cout << ans << endl;

}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}