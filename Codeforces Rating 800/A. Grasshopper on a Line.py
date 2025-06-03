# Problem: https://codeforces.com/problemset/problem/1837/A
# Solution: https://codeforces.com/contest/1837/submission/322734527


def solve():
    a, b = map(int,input().split())
    if a%b != 0:
        print(1)
        print(a)
    else:
        print(2)
        print(a-b+1,b-1)
for _ in range(int(input())):
    solve()