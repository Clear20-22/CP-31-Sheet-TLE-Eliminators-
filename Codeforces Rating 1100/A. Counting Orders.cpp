// Problem: https://codeforces.com/problemset/problem/1827/A
// Solution: https://codeforces.com/contest/1827/submission/332554182

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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a) {
        cin >> x;
    }
    for(auto &x : b) {
        cin >> x;
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    int ans = 1;

    for(int i = 0; i < n; i++) {
        int idx = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        ans = (ans * (n - idx - i)) % MOD;
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