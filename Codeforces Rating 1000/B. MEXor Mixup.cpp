// Problem: https://codeforces.com/problemset/problem/1567/B
// Solution: https://codeforces.com/contest/1567/submission/332656054

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
    int a, m;
    cin >> a >> m;
    
    int xr;
    if ((a - 1) % 4 == 0) xr = (a - 1);
    else if ((a - 1) % 4 == 1) xr = 1;
    else if ((a - 1) % 4 == 2) xr = a;
    else xr = 0;

    if(xr == m) {
        cout << a << endl;
        return;
    }
    if((xr ^ m) != a) {
        cout << a + 1 << endl;
        return;
    }
    cout << a + 2 << endl;


}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}