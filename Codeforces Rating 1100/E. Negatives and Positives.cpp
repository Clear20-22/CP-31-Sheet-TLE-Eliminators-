// Problem: https://codeforces.com/problemset/problem/1791/E
// Solution: https://codeforces.com/contest/1791/submission/332662599

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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int ans = 0, neg = 0;
    
    for(int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] = -a[i];
            neg++;
        }

        ans += a[i];
    }
    if(neg & 1){
        cout << ans - 2 * *min_element(a.begin(), a.end()) << endl;
        return;
    }

    cout << ans << endl;

    

}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}