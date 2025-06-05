// Problem : https: // codeforces.com/problemset/problem/1411/B
// Solution : https: // codeforces.com/contest/1411/submission/249498657

#include <bits/stdc++.h>
using namespace std;
bool ha(long long n)
{
    long long num = n, m;
    while (num != 0)
    {
        m = num % 10;
        if (m != 0)
        {
            if (n % m != 0)
                return false;
        }
        num /= 10;
    }
    return true;
}
long long ans(long long n)
{
    while (true)
    {
        if (ha(n))
            return n;
        else
            ha(++n);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << ans(n) << endl;
    }
    return 0;
}