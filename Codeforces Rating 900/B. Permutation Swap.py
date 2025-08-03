# Problem: https://codeforces.com/problemset/problem/1828/B
# Solution: https://codeforces.com/contest/1828/submission/332262280
import math


for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    arr = []
    for i in range(n):
        arr.append(abs(a[i] - (i + 1)))

    ans = 0
    for i in arr:
        ans = math.gcd(ans, i)
    print(ans)