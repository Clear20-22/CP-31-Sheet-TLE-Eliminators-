# Problem: https://codeforces.com/problemset/problem/1869/A
# Solution: https://codeforces.com/contest/1869/submission/322887264

def solve():
    n = int(input())
    arr = list(map(int,input().split()))
    
    if n%2 == 0:
        print(2)
        print(1,n)
        print(1,n)
    else:
        print(4)
        print(1,n)
        print(1,n-1)
        print(n-1,n)
        print(n-1,n)

for _ in range(int(input())):
    solve()