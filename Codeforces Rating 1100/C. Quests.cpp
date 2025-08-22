// Problem: https://codeforces.com/problemset/problem/1914/C
// Solution: https://codeforces.com/contest/1914/submission/334124045

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
     int n, k;
     cin >> n >> k;
     vector<int> a(n),b(n);
     for(int i=0;i<n;i++) cin >> a[i];
     for(int i=0;i<n;i++) cin >> b[i];

     int mx = 0, sum = 0, ans = 0;

     for(int i=0;i<n and i < k;i++)
     {
         mx = max(mx, b[i]);
         sum += a[i];
         ans = max(ans, sum + mx * (k - i - 1));
     }

     cout<<ans<<endl;

}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}