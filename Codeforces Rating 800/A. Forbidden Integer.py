# Problem: https://codeforces.com/problemset/problem/1845/A
# Solution: https://codeforces.com/contest/1845/submission/322317772

t = int(input())
for _ in range(t):
    n, k, x = map(int, input().split())
    allowed = [i for i in range(1, k+1) if i != x]
    
    dp = [False] * (n + 1)
    prev = [-1] * (n + 1)
    dp[0] = True
    
    for i in range(1, n + 1):
        for a in allowed:
            if i - a >= 0 and dp[i - a]:
                dp[i] = True
                prev[i] = a
                break
    
    if not dp[n]:
        print("NO")
    else:
        print("YES")
        res = []
        curr = n
        while curr > 0:
            res.append(prev[curr])
            curr -= prev[curr]
        print(len(res))
        print(' '.join(map(str, res)))