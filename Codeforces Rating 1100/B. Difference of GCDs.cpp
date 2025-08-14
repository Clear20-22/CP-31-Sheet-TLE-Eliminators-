// Problem: https://codeforces.com/problemset/problem/1708/B
// Solution: https://codeforces.com/contest/1708/submission/333792813

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

void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> ans;

    for(int i = 1, x; i <= n && (x = ((l + i - 1) / i) * i) <= r; ans.push_back(x), i++);
    if(ans.size() != n){
        cout<<"NO"<<endl;
        return;
    }

    cout << "YES"<<endl;
    for(int x : ans) cout << x << ' ';
    cout << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}