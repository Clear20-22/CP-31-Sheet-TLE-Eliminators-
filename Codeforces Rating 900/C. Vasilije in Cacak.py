# Problem: https://codeforces.com/problemset/problem/1878/C
# Solution: https://codeforces.com/contest/1878/submission/322809996

def solve():
    n, k, x = map(int,input().split())
    
    total_sum = n*(n+1)//2
    minik_sum = k*(k+1)//2
    maxk_sum = total_sum - (n-k)*(n-k+1)//2
    # print(maxk_sum)
    
    if minik_sum <= x <= maxk_sum:
        print("YES")
    else:
        print("NO")


for _ in range(int(input())):
    solve()