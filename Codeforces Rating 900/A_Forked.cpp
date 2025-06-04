// problem : https: // codeforces.com/problemset/problem/1904/A
// Solution: https://codeforces.com/contest/1904/submission/322806015

#include <bits/stdc++.h>
using namespace std;
 
#define Bismillah ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define Multiple_Test int t;cin>>t;while(t--) solve();
#define Single_Test solve();
#define Code_End return 0;
#define endl '\n'
#define int long long
#define MOD 1000000007
#define INF numeric_limits<int>::max()
 
void solve()
{
  int a,b,qx,qy,kx,ky;
  cin>>a>>b>>qx>>qy>>kx>>ky;


  set<pair<int,int>> s1,s2;

  vector<pair<int, int>> move = {
      {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

  for (auto i : move)
  {
      s1.insert({qx - i.first, qy - i.second});
      s2.insert({kx - i.first, ky - i.second});
  }
    int ans1 = 0;

    for(auto i:s1){
        if(s2.count(i)) ans1++;
    }

    cout<<ans1<<endl;
}

int32_t main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}