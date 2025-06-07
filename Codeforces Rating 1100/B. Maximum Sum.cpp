// Problem: https://codeforces.com/contest/1832/problem/B
// Solution: https://codeforces.com/contest/1832/submission/263046397

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    sort(v.begin(), v.end());

    // Compute prefix sums
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefix_sum[i + 1] = prefix_sum[i] + v[i];
    }

    long long max_sum = LLONG_MIN;

    for (int m = 0; m <= k; ++m)
    {
        if (2 * m > n || k - m > n)
        {
            continue;
        }

        int left_index = 2 * m;
        int right_index = n - (k - m);

        if (left_index > right_index)
        {
            continue;
        }

        long long remaining_sum = prefix_sum[right_index] - prefix_sum[left_index];
        max_sum = max(max_sum, remaining_sum);
    }

    cout << max_sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}