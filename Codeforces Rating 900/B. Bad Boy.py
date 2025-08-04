# Problem: https://codeforces.com/problemset/problem/1537/B
# Solution: https://codeforces.com/contest/1537/submission/332340057

for _ in range(int(input())):
    n, m, x, y = map(int, input().split())

    x1 = n if abs(n - x) > abs(1 - x) else 1
    y1 = m if abs(m - y) > abs(1 - y) else 1
    x2 = 1 if x1 == n else n
    y2 = 1 if y1 == m else m

    print(x1, y1, x2, y2)