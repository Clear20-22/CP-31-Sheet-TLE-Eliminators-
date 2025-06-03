// Problem : https: // codeforces.com/problemset/problem/1857/A
// Solution : https: // codeforces.com/contest/1857/submission/248007957

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, sum1 = 0, sum2 = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum1 += x;
        }
        if (!(sum1 & 1))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}