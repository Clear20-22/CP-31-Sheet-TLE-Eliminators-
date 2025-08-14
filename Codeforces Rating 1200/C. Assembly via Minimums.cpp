// Problem: https://codeforces.com/contest/1857/problem/C
// Solution: https://codeforces.com/contest/1857/submission/278972401

#include <bits/stdc++.h>
using namespace std;
 
#define Bismillah ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define Multiple_Test int t;cin>>t;while(t--) solve();
#define Single_Test solve();
#define Code_End return 0;
#define endl '\n'
#define ll long long
#define MOD 1000000007
#define INF numeric_limits<ll>::max()
 
void solve()
{
 ll n;
 cin>>n;
 vector<ll>v(n*(n-1)/2),ans;
 for(auto &i:v)
 {
    cin>>i;
 }
 sort(v.begin(),v.end());
 for(int i=0;i<v.size();i+=(--n))
 {
    ans.push_back(v[i]);
 }
 sort(ans.begin(),ans.end());
 ans.push_back(ans.back());
 for(ll i:ans)
 cout<<i<<' ';
 cout<<endl;
}

int main()
{
    Bismillah
    Multiple_Test
    // Single_Test
    Code_End
}