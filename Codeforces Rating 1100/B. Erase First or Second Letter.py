# Problem: https://codeforces.com/contest/1917/problem/B
# Solution: https://codeforces.com/contest/1917/submission/323275527

def solve():
    n = int(input())
    s = input()
    ans = {}
    tot = 0
    for ele in s:
        ans[ele] = ans.get(ele,0) + 1
        tot += len(ans)
    
    print(tot)

for _ in range(int(input())):
    solve()