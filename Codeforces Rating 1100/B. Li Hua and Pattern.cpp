// Problem: https://codeforces.com/problemset/problem/1797/B
// Solution: https://codeforces.com/contest/1797/submission/335014901

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
    int n, k;
    cin >> n >> k;

    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    int need = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int ni = n - 1 - i;
            int nj = n - 1 - j;
            if(a[i][j] != a[ni][nj]) need++;
        }
    }
    need /= 2;

    if(need > k or ((k - need) % 2 != 0 and n % 2 == 0)) {
        cout << "NO"<<endl;
    } else {
        cout << "YES"<<endl;
    }
}


int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}