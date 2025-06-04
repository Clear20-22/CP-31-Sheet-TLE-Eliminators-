# Problem: https://codeforces.com/problemset/problem/1559/A
# Solution: https://codeforces.com/contest/1559/submission/322814389

def solve():
    n = int(input())
    arr = list(map(int,input().split()))
    
    ans = arr[0]
    
    for ele in arr:
        ans &= ele
    
    print(ans)

for _ in range(int(input())):
    solve()