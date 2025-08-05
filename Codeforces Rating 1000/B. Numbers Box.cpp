// Problem: https://codeforces.com/problemset/problem/1447/B
// Solution: https://codeforces.com/contest/1447/submission/332489262

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
    int n, m;
    cin >> n >> m;

    int neg = 0, mini = INF, ans = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int x;
            cin >> x;

            if (x < 0)
                neg++;
            mini = min(mini, abs(x));
            ans += abs(x);
        }
    }

    if (neg % 2 == 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << ans - 2 * mini << endl;
    }
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}