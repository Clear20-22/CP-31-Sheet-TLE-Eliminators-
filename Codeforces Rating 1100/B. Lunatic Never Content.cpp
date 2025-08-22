// Problem: https://codeforces.com/problemset/problem/1826/B
// Solution: https://codeforces.com/contest/1826/submission/334992137

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

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);

    for(auto &x : a) cin >> x;

    int lo = 0, hi = n - 1;

    int ans = 0;

    while(lo < hi){
        ans = gcd(ans,abs(a[lo] - a[hi]));
        lo++;
        hi--;
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