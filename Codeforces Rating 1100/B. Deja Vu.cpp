// Problem: https://codeforces.com/problemset/problem/1891/B
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
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);  
    for(auto &x : a) cin >> x;
    
    vector<int> seen(31, 0); 
    for(int i = 0; i < q; i++){
        int x; cin >> x;
        seen[x] ++;
    }
    for(int k = 1; k <= 30; k++){
        for(int i = 0; i < n; i++){
            if(seen[k] and a[i] % (1LL << k) == 0) 
                a[i] += (1LL << (k-1)); 
        }
    }

    for(int v : a) cout << v << ' '; 
    cout << endl;
}


int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}