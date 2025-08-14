// Problem: https://codeforces.com/problemset/problem/1914/D
// Solution: https://codeforces.com/contest/1914/submission/333976901

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
    cin>>n;
    vector<pair<int,int>> a,b,c;

    for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        a.push_back({x,i+1});
    }
     for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        b.push_back({x,i+1});
    }
     for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        c.push_back({x,i+1});
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());

    int ans = 0;

    for(int x = 0;x<3;x++){
        for(int y = 0;y<3;y++){
            for(int z = 0;z<3;z++){
                if(a[x].second != b[y].second and a[x].second != c[z].second and b[y].second != c[z].second){
                    ans = max(ans,a[x].first + b[y].first + c[z].first);
                }
            }
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