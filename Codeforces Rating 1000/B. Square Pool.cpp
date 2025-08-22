// Problem: https://codeforces.com/problemset/problem/2120/B
// Solution: https://codeforces.com/contest/2120/submission/334589484

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
    int n,k;
    cin>>n>>k;

    int ans = 0;

    for(int i=0;i<n;i++){
        int dx,dy,x,y;
        cin>>dx>>dy>>x>>y;

        if((dx == 1 and dy == 1) or (dx == -1 and dy == -1)){
            ans += x != y ? 0 : 1;
        } else if((dx == 1 and dy == -1) or (dx == -1 and dy == 1)){
            ans += x != k - y ? 0 : 1;
        } else {
            ans += x != 0 ? 0 : 1;
        }   
    }

    cout << ans << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}