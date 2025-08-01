// Problem: https://codeforces.com/problemset/problem/1806/A
// Solution: https://codeforces.com/contest/1806/submission/331945531
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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x = abs(b - d);
    int ans = x;
    int y = c - x;
    if(y <= a and d >= b){
        cout << ans + abs(a-y) << endl;
    } else {
        cout << -1 << endl;
    }
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}