// Problem: https://codeforces.com/problemset/problem/1618/C
// Solution: https://codeforces.com/contest/1618/submission/332558300

#include <iostream>
#include <vector>
using namespace std;

#define Bismillah ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Multiple_Test int t; cin >> t; while (t--) solve();
#define Single_Test solve();
#define Code_End return 0;
#define endl '\n'
#define int long long
#define INF numeric_limits<int>::max()

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n), x, y;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            x.push_back(arr[i]);
        else
            y.push_back(arr[i]);
    }

    int gcd_x = x[0], gcd_y = y[0];
    for (size_t i = 1; i < x.size(); i++)
        gcd_x = gcd(gcd_x, x[i]);
    for (size_t i = 1; i < y.size(); i++)
        gcd_y = gcd(gcd_y, y[i]);

    bool ok_x = true, ok_y = true;
    for (int i = 1; i < n; i += 2)
        if (arr[i] % gcd_x == 0) ok_x = false;
    for (int i = 0; i < n; i += 2)
        if (arr[i] % gcd_y == 0) ok_y = false;

    if (ok_x && gcd_x > 0)
        cout << gcd_x << endl;
    else if (ok_y && gcd_y > 0)
        cout << gcd_y << endl;
    else
        cout << 0 << endl;
}

int main()
{
    Bismillah
    Multiple_Test
    Code_End
}