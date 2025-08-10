// Problem: https://codeforces.com/contest/1632/problem/B
// Solution: https://codeforces.com/contest/1632/submission/333235371

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    long long m = 1;
    while ((m << 1) <= n - 1) m <<= 1;

    vector<int> p;
    for (long long i = m - 1; i >= 0; --i) p.push_back(i);
    for (long long i = m; i <= n - 1; ++i) p.push_back(i);

    for (int i = 0; i < n; ++i) {
        cout << p[i] << (i + 1 == n ? '\n' : ' ');
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}