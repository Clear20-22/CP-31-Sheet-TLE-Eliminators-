// Problem : https: // codeforces.com/contest/1899/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        if (((a - 1) % 3 == 0) or ((a + 1) % 3 == 0))
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    return 0;
}