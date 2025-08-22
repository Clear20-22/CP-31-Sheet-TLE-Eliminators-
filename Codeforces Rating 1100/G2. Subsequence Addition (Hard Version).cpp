// Problem: https://codeforces.com/problemset/problem/1807/G2
// Solution: https://codeforces.com/contest/1807/submission/335007775

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
    vector<int> a(n),sum(n+1,0);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());

    if(n == 1 and a[0] == 1){
        cout<<"YES"<<endl;
        return;
    }

    if(a[0] != 1 and n == 1){
        cout<<"NO"<<endl;
        return;
    }

    if(a[0] != 1){
        cout<<"NO"<<endl;
        return;
    }
    sum[0] = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > sum[i-1]){
            cout<<"NO"<<endl;
            return;
        }
        sum[i] = sum[i-1] + a[i];
    }
    cout<<"YES"<<endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}