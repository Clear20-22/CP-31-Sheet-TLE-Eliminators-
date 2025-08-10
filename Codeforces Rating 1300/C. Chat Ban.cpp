// Problem: https://codeforces.com/problemset/problem/1612/C
// Solution: https://codeforces.com/contest/1612/submission/285484474

#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() 
{
    int t;
    cin >>t ;
    while(t--){
      int a,b;
      cin>>a>>b;
      int hi=2*a-1,lo=1,ans=0,trc;
      while(lo<=hi){
        int mid=(hi+lo)/2;
        int em;
        if(mid<=a){
          em=mid*(mid+1)/2;
        }
        else{
          em=a*(a+1)/2;
          int dif=mid-a;
          em+=dif*a-dif*(dif+1)/2 ;
        }
        if(em<b)
        {
        ans=mid;
        trc=em;
        lo=mid+1;
        }
        else
        hi=mid-1;
      }
    //  if(trc==b)
    //  cout << ans << endl;
     // else
     if(a==1)
     cout << 1 << std::endl;
     else if(a*(a+1)/2 + (a-1)*a - a*(a-1)/2 <= b)
      cout << 2*a - 1<< endl;
      else
      cout << ans + 1  << endl;
    }
    return 0;
}