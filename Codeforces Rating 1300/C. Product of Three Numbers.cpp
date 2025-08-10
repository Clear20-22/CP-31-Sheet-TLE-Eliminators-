// Problem: https://codeforces.com/problemset/problem/1294/C
// Solution: https://codeforces.com/contest/1294/submission/266486513

#include <bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define multi_test int t;cin>>t;while(t--) solve();
#define single_test solve();
#define ll long long

void solve()
{
  int n;
  cin>>n;
  set<int>s;
  for(int i=2;i*i<=n;i++)
  if(n%i==0)
  s.insert(i),s.insert(n/i);
  if(s.size()<3)
  {
    cout<<"NO"<<endl;
    return;
  }
  vector<int>ans;
  for(auto it:s)
//   cout<<it<<endl;
  ans.push_back(it);
  for(int i=0;i<ans.size()-2;i++)
  {
      if (n % (ans[i] * ans[i + 1]) == 0 and ans[i] != n / (ans[i] * ans[i + 1]) and ans[i + 1] != n / (ans[i] * ans[i + 1]) and n / (ans[i] * ans[i + 1])!=1)
      {
          cout << "YES" << endl;
          cout << ans[i] << ' ' << ans[i + 1] << ' ' << n / (ans[i] * ans[i + 1]) << endl;
          return;
    }
  }
  cout<<"NO"<<endl;

}

int main()
{
    boost
    multi_test
    // single_test
    return 0;
}