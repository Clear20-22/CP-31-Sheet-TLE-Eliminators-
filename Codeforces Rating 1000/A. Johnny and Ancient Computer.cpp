// Problem: https://codeforces.com/problemset/problem/1362/A
// Solution: https://codeforces.com/contest/1362/submission/332451280

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
    int n, m;
    cin >> n >> m;

    if(n < m) swap(n, m);

    int big = 0, small = 0;

    while(n % 2 == 0) n /= 2, big++;
    while(m % 2 == 0) m /= 2, small++;

    if(n != m){
        cout << -1 << endl;
        return;
    }

    int need = big - small;
    int ans = need / 3;
    need %= 3;
    ans += need / 2;
    need %= 2;
    ans += need;


    cout<< ans << endl;

}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}