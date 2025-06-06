# Problem: https://codeforces.com/problemset/problem/1883/C
# Solution: https://codeforces.com/contest/1883/submission/323104786
def solve():
    n, m = map(int,input().split())
    arr = list(map(int,input().split()))
    
    ans = float('inf')
    even = 0
    
    for ele in arr:
        if ele&1 == 0:
            even += 1
        
        if ele%m == 0:
            ans = 0
        
        ans = min(ans,m - ele%m)
    
    if m == 4:
        if even >= 2:
            ans = min(ans,0)
        elif even == 1:
            ans = min(ans,1)
        else :
            ans = min(ans,2)
    print(ans)

for _ in range(int(input())):
    solve()