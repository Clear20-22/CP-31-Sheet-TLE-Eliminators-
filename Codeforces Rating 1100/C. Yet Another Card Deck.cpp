// Problem: https://codeforces.com/problemset/problem/1511/C
// Solution: https://codeforces.com/contest/1511/submission/333972478

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
  int n,m;
  cin>>n>>m;
  vector<int>v(n);
  for(auto &i: v) cin>>i;
  
  for(int i=0;i<m;i++){
    int x;
    cin>>x;

    int idx = find(v.begin(),v.end(),x) - v.begin();

    cout<<idx+1<<' ';

    rotate(v.begin(),v.begin()+idx,v.begin()+idx + 1);
  }
}

int32_t main()
{
    Bismillah
    // Multiple_Test
    Single_Test
    Code_End
}