// # Problem:https://codeforces.com/problemset/problem/1805/A
// # Solution: https://codeforces.com/contest/1805/submission/245073949

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,sum=0;
      cin>>n;
      for(int i=0;i<n;i++)
      {
         int x;
         cin>>x;
        sum^=x;
      }
      if((n%2==0 and sum==0) or n%2!=0)
      cout<<sum<<endl;
      else cout<<-1<<endl;
    }
    return 0;
}