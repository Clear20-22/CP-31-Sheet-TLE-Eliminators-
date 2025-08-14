// Problem: https://codeforces.com/problemset/problem/1780/B
// Solution: 

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
#include <numeric>
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
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(auto &i: v) cin>>i;

    int tot = accumulate(v.begin(),v.end(),0ll);
    int tries = 0;
    int ans = 0;

    for(int i = 0;i<n-1;i++){
        tries += v[i];
        ans = max(ans,gcd(tries,tot-tries));
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