// Problem: https://codeforces.com/problemset/problem/1520/D
// Solution: https://codeforces.com/contest/1520/submission/266836899

#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        map<long long, long long> m;
        long long ans = 0;
        
        for (int p = 0; p < n; p++) {
            long long x;
            cin >> x;
            x -= p;
            
            if (m.count(x)) {
                ans += m[x];
            }
            m[x]++;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}