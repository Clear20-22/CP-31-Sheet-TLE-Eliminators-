# Problem: https://codeforces.com/problemset/problem/1881/A
# Solution: https://codeforces.com/contest/1881/submission/322535627

def solve():
    n = map(int,input().split())
    a = input()
    b = input()
    
    for ans in range(6):
        if b in a:
            print(ans)
            return
        a += a
    print(-1)

for _ in range(int(input())):
    solve()
    