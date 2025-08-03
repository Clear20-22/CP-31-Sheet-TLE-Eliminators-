# problem: https://codeforces.com/problemset/problem/1373/B
# Solution: https://codeforces.com/contest/1373/submission/332268227


from math import log2


for _ in range(int(input())):
    s = input()

    _0 = s.count('0')
    _1 = s.count('1')

    if _0 == 0 or _1 == 0 or min(_0, _1) % 2 == 0:
        print("NET")
        continue
    else:
        print("DA")
        continue