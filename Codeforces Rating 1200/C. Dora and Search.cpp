// Problem: https://codeforces.com/problemset/problem/1793/C
// Solution: https://codeforces.com/contest/1793/submission/266263746

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
   vector<int>v(n);
   for(auto &i:v)
   cin>>i;
   int maxx=n,minn=1;
   int hi=n-1,lo=0,k=0;
   while(hi>lo)
   {
    if(v[lo]==minn)
    {
        minn++;
        lo++;
        continue;
    }
    if(v[lo]==maxx)
    {
        maxx--;
       lo++;
        continue;
    }
    if (v[hi] == minn)
    {
        minn++;
        hi--;
        continue;
    }
    if (v[hi] == maxx)
    {
        maxx--;
        hi--;
        continue;
    }
    cout<<lo+1<<' '<<hi+1<<endl;
    return ;
   }
   cout<<-1<<endl;
   return;
}

int main()
{
    boost
    multi_test
    // single_test
    return 0;
}