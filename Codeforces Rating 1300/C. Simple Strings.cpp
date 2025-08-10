// Problem: https://codeforces.com/problemset/problem/665/C
// Solution: https://codeforces.com/contest/665/submission/333240392

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
    string s;
    cin >> s;
    
    for(int i = 1; i < s.length(); i++){
        if(s[i-1] == s[i]){
            s[i] = i < s.length() - 1 ? s[i] < 'y' ? s[i+1] == s[i] + 1 ? s[i] + 2 : s[i] + 1 : s[i+1] == s[i] - 1 ? s[i] - 2 : s[i] - 1 : s[i] < 'z'? s[i] + 1 : s[i] - 1; 
        }
    }

    cout<< s<< endl;
}

int32_t main()
{
    Bismillah
    // Multiple_Test
    Single_Test
    Code_End
}