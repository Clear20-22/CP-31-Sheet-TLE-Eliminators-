# Problem: https://codeforces.com/contest/1715/problem/B
# Solution: https://codeforces.com/contest/1715/submission/323089992
# Optimized: Build list and use join for output instead of multiple print calls

def solve():
    n, k, b, s = map(int,input().split())
    minValue = k*b
    maxValue = n*(k-1) + b*k
    
    if minValue <= s <= maxValue:
        result = []
        for i in range(0,n):
            if i == 0:
                if s >= k*b + k-1:
                    result.append(k*b + k-1)
                    s -= k*b + k-1
                else:
                    result.append(s)
                    s = 0
            elif s > 0:
                if s > k-1:
                    s -= k-1
                    result.append(k-1)
                else:
                    result.append(s)
                    s = 0
            else:
                result.append(0)
        print(' '.join(map(str, result)))
    else:
        print(-1)
        

for _ in range(int(input())):
    solve()