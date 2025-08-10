// Problem: https://codeforces.com/problemset/problem/1372/B
// Solution: https://codeforces.com/contest/1372/submission/268926082

#include <bits/stdc++.h>
using namespace std;
#define Boost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define Multiple_Test int t;cin>>t;while(t--) solve();
#define Single_Test solve();
#define endl '\n'
#define ll long long
  
void solve()
{
   int n;
   cin>>n; 
   int _1,_2,l=0;
   for(int i=2;i*i<=n;i++)
   {
      if(n%i==0){
         l=1;
      _2=n/i,_1=n-_2;
       break;
      }
   }
   if(l)
   cout<<_1<<' '<<_2<<endl;
   else cout<<1<<' '<<n-1<<endl;
}

int main()
{
   Boost
   Multiple_Test
   // Single_Test
   return 0;
}