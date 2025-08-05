// Problem: https://codeforces.com/problemset/problem/1783/A
// Solution: https://codeforces.com/contest/1783/submission/332510793

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
    map<int, int, std::greater<int>> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    if (freq.size() == 1) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;

    while (!freq.empty())
    {
        for (auto it = freq.begin(); it != freq.end(); ) {
            cout << it->first << " ";
            it->second--;
            if (it->second == 0) {
                it = freq.erase(it);
            } else {
                ++it;
            }
        }
    }

    cout << endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}