# Problem: https://codeforces.com/contest/1312/problem/B
# Solution: https://codeforces.com/contest/1312/submission/323196714
# Optimized: Use join instead of multiple print calls

def solve():
    n = int(input())
    arr = list(map(int,input().split()))
    
    arr.sort(reverse=True)
    
    # More efficient: single print with join instead of loop with end=' '
    print(' '.join(map(str, arr)))

for _ in range(int(input())):
    solve()