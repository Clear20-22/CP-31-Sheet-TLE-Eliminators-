// Problem: https://codeforces.com/problemset/problem/1527/B1
// Solution: https://codeforces.com/contest/1527/submission/266663263

#include <bits/stdc++.h>
using namespace std;
#define Boost ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define Multiple_Test int t;cin>>t;while(t--) solve();
#define Single_Test solve();
#define ll long long
   
void solve()
{
   int n,_0=0;
   cin>>n;
   string s;
   cin>>s;
   for(char c:s)
   if(c=='0')
   _0++;


       if(_0&1 and _0>1)
           cout << "ALICE" << endl;
       else
           cout << "BOB" << endl;
}

int main()
{
   Boost
   Multiple_Test
//    Single_Test
   return 0;
}