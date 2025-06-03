# Problem: https://codeforces.com/problemset/problem/1814/A
# Solution: https://codeforces.com/contest/1814/submission/322562670

def solve():
    a, b = map(int,input().split())
    if a%2 == b%2 or b == 1 or a%2 == 0 or a%b == 0:
        print("Yes")
    else:
        print("NO")

for _ in range(int(input())):
    solve()
    