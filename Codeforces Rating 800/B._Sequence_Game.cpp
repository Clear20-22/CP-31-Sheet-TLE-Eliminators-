// Problem: https://codeforces.com/problemset/problem/1862/B
// Solution: https://codeforces.com/contest/1862/submission/331940675
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
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    vector<int> ans;
    ans.push_back(a[0]);

    for(int i = 1; i < n; i++)
    {
        if(a[i] >= a[i - 1])
        {
            ans.push_back(a[i]);
        } else{
            ans.push_back(a[i]);
            ans.push_back(a[i]);
        }
    }

    cout << ans.size() << endl;
    for(auto &x : ans) cout << x << " ";
    cout << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}