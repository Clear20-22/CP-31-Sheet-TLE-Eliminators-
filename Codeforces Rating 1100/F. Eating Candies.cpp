// Problem: https://codeforces.com/problemset/problem/1669/F
// Solution: https://codeforces.com/contest/1669/submission/333796896

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
    cin>> n;
    vector<int> v(n),suf,pref;

    for(auto &i: v) cin>>i;

    suf.push_back(0);
    pref.push_back(0);

    for(int i=0;i<n;i++) pref.push_back(pref.back()+v[i]);
    for(int i=n-1;i>=0;i--) suf.push_back(suf.back()+v[i]);
    reverse(suf.begin(),suf.end());

    int ans = 0, l = 0, r = n-1;

    while(l <= r){
        if(suf[r] == pref[l]){
            ans = max(ans,l + n - r);
            r --, l ++;
        } else if(suf[r] > pref[l]){
            l ++;
        } else {
            r --;
        }

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