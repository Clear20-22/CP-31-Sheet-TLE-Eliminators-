# Problem: https://codeforces.com/problemset/problem/1726/A
# Solution: https://codeforces.com/contest/1726/submission/323036201

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    max_diff = 0

    for i in range(n - 1):
        max_diff = max(max_diff, a[-1] - a[i])

    for i in range(1, n):
        max_diff = max(max_diff, a[i] - a[0])

    for i in range(n - 1):
        max_diff = max(max_diff, a[i] - a[i + 1])

    print(max_diff)
