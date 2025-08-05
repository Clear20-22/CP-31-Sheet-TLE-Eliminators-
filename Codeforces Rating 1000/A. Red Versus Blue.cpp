// Problem: https://codeforces.com/problemset/problem/1659/A
// Solution: 

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
    int n, a, b;
    cin >> n >> a >> b;
    string s = "";

    int groups = b + 1;
    int minR = a / groups;
    int extra = a % groups;

    for (int i = 0; i < groups; ++i) {
        int Rs = minR + (i < extra ? 1 : 0);
        for (int j = 0; j < Rs; ++j) s += 'R';
        if (i < b) s += 'B';
    }
    cout << s << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}