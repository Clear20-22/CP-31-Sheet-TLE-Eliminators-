// Problem : https: // codeforces.com/problemset/problem/1883/B
// Solution : https: // codeforces.com/contest/1883/submission/249848442

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s;
        cin >> n >> m >> s;
        map<char, int> ma;
        for (int i = 0; i < s.length(); i++)
        {
            ma[s[i]]++;
        }
        long long sum = 0;
        for (auto it : ma)
        {
            if (it.second & 1)
                sum++;
        }
        if (sum - m > 1)
            cout << "No" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}