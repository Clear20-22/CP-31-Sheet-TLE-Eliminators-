// Problem: https://codeforces.com/problemset/problem/1850/E
// Solution: https://codeforces.com/contest/1850/submission/334957019

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
    int n,c;
    cin >> n >> c;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int lo = 0, hi = MOD;
    while(lo < hi)
    {
        int mid = lo + (-lo + hi) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (a[i] + 2*mid) * (a[i] + 2*mid);
            if(sum > c) break;
        }

        if(sum == c) {cout<<mid<<endl;return;}
        if(sum < c) lo = mid + 1;
        else hi = mid;
    }
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}