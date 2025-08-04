# Problem: https://codeforces.com/problemset/problem/1543/A
# Solution: https://codeforces.com/contest/1543/submission/332317810

import math


for _ in range(int(input())):
    a, b = map(int, input().split())

    if a == b:
        print(0, 0)
    else:
        print(abs(a-b),min(a%abs(a-b),abs(a-b)-a%abs(a-b)))
        