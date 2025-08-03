# Problem: https://codeforces.com/problemset/problem/1374/B
# Solution: https://codeforces.com/contest/1374/submission/332234954

for _ in range(int(input())):
    n = int(input())
    _3 = 0
    _2 = 0

    while n % 2 == 0:
        n //= 2
        _2 += 1
    while n % 3 == 0:
        n //= 3
        _3 += 1
    if n == 1 and _2 <= _3:
        print(- _2 + 2*_3)
    else:
        print(-1)
