// Problem: https://codeforces.com/problemset/problem/1791/G1
// Solution: https://codeforces.com/contest/1791/submission/333910829

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
    int n,tot,cnt=0;
    cin>>n>>tot;
    vector<int> v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x+i+1);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        if(tot > 0 and tot >= v[i]){
            tot -= v[i];
            cnt ++;
        } else {
            cout<<i<<endl;
            return;
        }
    }

    cout<<cnt<<endl;

    
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}