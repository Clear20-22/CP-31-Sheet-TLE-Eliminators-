// Problem: https://codeforces.com/problemset/problem/1821/B
// Solution: https://codeforces.com/contest/1821/submission/334995815

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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int l = 0, r = n - 1;


        while (l < n and a[l] == b[l]) l++;
        while (r >= 0 and a[r] == b[r]) r--;

        while (l > 0 and b[l-1] <= b[l]) l--;

        while (r < n-1 and b[r] <= b[r+1]) r++;

        cout << l+1 << " " << r+1 << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}