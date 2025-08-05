// Problem: https://codeforces.com/problemset/problem/1831/B
// Solution: https://codeforces.com/contest/1831/submission/332459603

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
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(auto &i: a) cin>>i;
    for(auto &i: b) cin>>i;

    map<int,int> maa,mab;

    for(int i = 0, cnt = 1;i<n;i++){
        if(i and a[i] == a[i-1]) cnt ++;
        else cnt = 1;

        maa[a[i]] = max(maa[a[i]],cnt);
    }

    for(int i = 0, cnt = 1;i<n;i++){
        if(i and b[i] == b[i-1]) cnt ++;
        else cnt = 1;       

        mab[b[i]] = max(mab[b[i]],cnt);
    }

    int ans = 1;

    for(auto i: maa){
        ans = max(ans,i.second+mab[i.first]);
    }
    for(auto i: mab){
        ans = max(ans,i.second+maa[i.first]);
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