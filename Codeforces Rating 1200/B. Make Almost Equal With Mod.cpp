// Problem: https://codeforces.com/problemset/problem/1909/B
// Solution: https://codeforces.com/contest/1909/submission/335028204

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
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int j = 0; j < 61; j++)
    {
        set<int> s;
        for(int i = 0; i < n; i++) {
                s.insert(a[i] % (1ll << j));
        }

        if(s.size() == 2) {
            cout<< (1ll << (j)) << endl;
            return;
        }
    }

}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}