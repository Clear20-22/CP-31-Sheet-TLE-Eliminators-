// Problem: https://codeforces.com/contest/1761/problem/A
// Solution: https://codeforces.com/contest/1761/submission/331960845

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
    int a,b,c;
    cin >> a >> b >> c;

    if(b + c + 2 <= a){
        cout << "YES" << endl;
    } else if(a == b and a == c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}