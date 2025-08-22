// Problem: https://codeforces.com/problemset/problem/1872/D
// Solution: https://codeforces.com/contest/1872/submission/335037043

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

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

void solve()
{
    int n,a,b;
    cin >> n >> a >> b;

    int lcab = lcm(a, b);
    a = n/a - n/lcab;
    b = n/b - n/lcab;

    int ans = (((n*(n+1))/2) - ((n-a)*(n-a+1)/2)) - ((b*(b+1))/2);

    cout << ans << endl;

}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}