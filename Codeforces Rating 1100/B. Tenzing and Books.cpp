// Problem: https://codeforces.com/problemset/problem/1842/B
// Solution: https://codeforces.com/contest/1842/submission/334960913

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
    int n,x;
    cin >> n >> x;
    vector<int> a(n);

    int ans = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) cin >> a[j];
            for (int j = 0; j < n; j++) {
                if ((x | a[j]) != x) break;
                ans |= a[j];
            }
        }

    if(ans == x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    } 
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}