// Problem: https://codeforces.com/problemset/problem/1899/C
// Solution: https://codeforces.com/contest/1899/submission/332551403

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
    vector<int> a(n), ans;
    for(auto &x : a) {
        cin >> x;
    }

    ans.push_back(a[0]);
    for(int i = 1; i < n; i++) {
        if(abs(a[i]) % 2 != abs(a[i - 1]) % 2) {
            ans.push_back(max({(a[i]),(a[i]) + (ans.back())}));
        } else {
            ans.push_back(a[i]);
        }
    }

    cout << *max_element(ans.begin(), ans.end()) << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}