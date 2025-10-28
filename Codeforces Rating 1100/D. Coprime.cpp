// Problem: https://codeforces.com/problemset/problem/1742/D
// Solution: https://codeforces.com/contest/1742/submission/333966486
// Optimized: Removed unnecessary includes and improved GCD precomputation

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <numeric>
using namespace std;

#define Bismillah ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Multiple_Test int t; cin >> t; while (t--) solve();
#define Single_Test solve();
#define Code_End return 0;
#define endl '\n'
#define int long long
#define MOD 1000000007
#define INF numeric_limits<int>::max()

// Store only the last index for each value (1-1000)
// Instead of precomputing all coprime pairs, compute on-demand
int lastIndex[1001];

void solve()
{
    int n;
    cin>>n;
    
    // Reset lastIndex array for each test case
    fill(lastIndex, lastIndex + 1001, 0);

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        lastIndex[x] = i+1;
    }

    int ans = -1;

    // Only check pairs where both values exist in the array
    for(int i=1;i<=1000;i++){
        if(lastIndex[i] == 0) continue;
        for(int j=i;j<=1000;j++){
            if(lastIndex[j] == 0) continue;
            // Use std::gcd for efficiency (C++17)
            if(__gcd(i, j) == 1) {
                ans = max(ans, lastIndex[i] + lastIndex[j]);
            }
        }
    }

    cout<<ans<<endl;
    
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}