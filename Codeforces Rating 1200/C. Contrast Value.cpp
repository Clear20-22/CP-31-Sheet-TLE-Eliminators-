// Problem: https://codeforces.com/problemset/problem/1832/C
// Solution: https://codeforces.com/contest/1832/submission/335041659

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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    n = unique(a.begin(), a.end()) - a.begin();
    int ans = n;
    for (int i = 0; i + 2 < n; ++i) {
      ans -= (a[i] < a[i + 1] and a[i + 1] < a[i + 2]);
      ans -= (a[i] > a[i + 1] and a[i + 1] > a[i + 2]);
    }

    // for(int i: a) cout << i << " ";
    // cout << endl;
    cout << ans << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}