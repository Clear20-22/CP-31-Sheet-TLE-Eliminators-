# Problem: https://codeforces.com/problemset/problem/1471/A
# Solution: https://codeforces.com/contest/1471/submission/332341644

from math import ceil


for _ in range(int(input())):
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))
    ans = 0
    mini = 0
    for x in arr:
        ans += ceil(x / m)
        mini += x
    
    print(ceil(mini / m) , ans)
    