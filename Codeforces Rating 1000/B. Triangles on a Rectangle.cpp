// Problem: https://codeforces.com/problemset/problem/1620/B
// Solution: https://codeforces.com/contest/1620/submission/333199386

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
    int w, h;
    cin >> w >> h;

    int best = 0;

    for (int s = 0; s < 2; ++s) {
        int k; cin >> k;
        int first, last;
        cin >> first;
        last = first;
        for (int i = 1; i < k; ++i) {
            int x; cin >> x;
            last = x;
        }
        best = max(best, (last - first) * h);
    }

    for (int s = 0; s < 2; ++s) {
        int k; cin >> k;
        int first, last;
        cin >> first;
        last = first;
        for (int i = 1; i < k; ++i) {
            int y; cin >> y;
            last = y;
        }
        best = max(best, (last - first) * w);
    }

    cout << best << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    Code_End
}