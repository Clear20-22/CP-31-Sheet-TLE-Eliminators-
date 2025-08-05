// Problem: https://codeforces.com/problemset/problem/1849/B
// Solution: https://codeforces.com/contest/1849/submission/332446232

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
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back({(x % m == 0 ? m : x % m), i + 1});
    }
    sort(a.begin(), a.end(),[](pair<int,int> x, pair<int,int> y) {
        if(x.first != y.first) return x.first > y.first;
        else return x.second < y.second ;
    });

    for(auto x: a) {
        cout << x.second << " ";
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