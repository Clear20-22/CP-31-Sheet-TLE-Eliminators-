// Problem: https://codeforces.com/problemset/problem/1614/B
// Solution: https://codeforces.com/contest/1614/submission/333198721

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
    cin >> n;
    vector<pair<int, int>> a(n);
    vector<int> ans,fin(n+1);
    for (int i = 0; i < n; i++) {cin >> a[i].first; a[i].second = i + 1; if (i != 0) ans.push_back(i),ans.push_back(-i);}

    sort(a.rbegin(), a.rend());
    fin[0] = 0;
    reverse(ans.begin(), ans.end());

    int b = 0;

    if(n == 1){
        cout<< a[0].first * 2 << endl;
        cout << 0 << ' '<< 1 <<endl;
        return;
    }

    for(auto i: a){
        fin[i.second] = ans.back();
        b += abs(-ans.back()) * i.first;
        ans.pop_back();
    }

    cout << b * 2 << endl;
    for(int i: fin) cout << i << " ";
    cout << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}