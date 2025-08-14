// Problem: https://codeforces.com/problemset/problem/1742/D
// Solution: https://codeforces.com/contest/1742/submission/333966486

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

vector<vector<int>> store(1002);

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void fun() {
    for(int i = 1;i<=1000;i++){
        if(i&1){
            for(int j=1;j<=1000;j++){
                if(gcd(i,j)==1) store[i].push_back(j);
            }
        } else {
            for(int j = 1;j<=1000;j+=2) 
                if(gcd(i,j) == 1) store[i].push_back(j);
        }
    }
}

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> point(1001);

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        point[x].push_back(i+1);
    }

    int ans = -1;

    for(int i=1;i<=1000;i++){
        for(int j: store[i]){
            if(point[i].size() and point[j].size()) ans = max(ans,point[i].back() + point[j].back());
        }
    }

    cout<<ans<<endl;
    
}

int32_t main()
{
    Bismillah
    fun();
    Multiple_Test
    // Single_Test
    Code_End
}