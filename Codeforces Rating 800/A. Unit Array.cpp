// Problem: https://codeforces.com/problemset/problem/1834/A
// Solution: https://codeforces.com/contest/1834/submission/331954495

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
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    int pos = 0, neg = 0;
    for(int i = 0; i < n; i++){
        if (a[i] == 1) {
            pos++;
        } else if (a[i] == -1) {
            neg++;
        }
    }

    int cnt = 0;
    if (pos < (n+1)/2) {
        cnt += (n+1)/2 - pos;
        neg = (n+1)/2 - pos + neg;
    }
    
    if (neg % 2 == 1) {
        cnt++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}