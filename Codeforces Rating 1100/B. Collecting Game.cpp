// Problem: https://codeforces.com/problemset/problem/1904/B
// Solution: https://codeforces.com/contest/1904/submission/334190732

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
    int n;
    cin >> n;

    vector<pair<int,int>> a(n); 
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a[i] = {x, i};
    }

    sort(a.begin(), a.end()); 

    vector<int> pref(n);
    pref[0] = a[0].first;
    for (int i = 1; i < n; i++) pref[i] = pref[i-1] + a[i].first;

    vector<int> ans(n);
    ans[n-1] = n-1;  

    for (int i = n-2; i >= 0; i--) {
        if (pref[i] >= a[i+1].first) {
            ans[i] = ans[i+1];  
        } else {
            ans[i] = i;         
        }
    }

    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        res[a[i].second] = ans[i];
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}



int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}