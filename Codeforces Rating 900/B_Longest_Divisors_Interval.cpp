// Problem : https: // codeforces.com/problemset/problem/1855/B
// Solution : https: // codeforces.com/contest/1855/submission/248001998

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long c, max = 1;
        cin >> c;
        int count = 0;
        for (long long i = 1; i <= 1000; i++)
        {
            if (c % i == 0)
                count++;
            if (c % i != 0)
                count = 0;
            if (count >= max)
                max = count;
        }
        cout << max << endl;
    }
    return 0;
}