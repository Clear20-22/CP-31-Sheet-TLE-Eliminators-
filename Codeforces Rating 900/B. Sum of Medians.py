# Problem: https://codeforces.com/problemset/problem/1440/B
# Solution: https://codeforces.com/contest/1440/submission/332322606

for _ in range(int(input())):
    k, n = map(int, input().split())
    a = [0] + list(map(int, input().split()))
    x = (k + 1) // 2 - 1
    x = k - x
    z = n * k + 1
    ans = 0
    for _ in range(n):
        z -= x
        ans += a[z]
    print(ans)