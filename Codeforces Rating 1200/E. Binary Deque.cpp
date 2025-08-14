// Problem: https://codeforces.com/problemset/problem/1692/E
// Solution: https://codeforces.com/contest/1692/submission/270085406

#include <bits/stdc++.h>
using namespace std;

#define Boost ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define Multiple_Test \
   int t;             \
   cin >> t;          \
   while (t--)        \
      solve();
#define Single_Test solve();
#define endl '\n'
#define int long long
const int N = 1e5 + 10;
const int M = 1e9 + 7;

void solve()
{
   int n, s;
   cin >> n >> s;
   vector<int> v(n);
   for (auto &x : v)
   {
      cin >> x;
   }

   vector<int> pre(n, v[0]);
   for (int i = 1; i < n; i++)
   {
      pre[i] = pre[i - 1] + v[i];
   }

   if (pre[n - 1] < s)
   {
      cout << -1 << endl;
      return;
   }

   int ans = 0;

   for (int i = 0; i < n; i++)
   {
      int l = i, r = n - 1, mid;
      while (l <= r)
      {
         mid = (l + r) / 2;
         int current_sum = pre[mid] - (i > 0 ? pre[i - 1] : 0);
         if (current_sum <= s)
         {
            ans = max(ans, mid - i + 1);
            l = mid + 1;
         }
         else
         {
            r = mid - 1;
         }
      }
   }

   cout << n - ans << endl;
}

signed main()
{
   Boost
       Multiple_Test return 0;
}
