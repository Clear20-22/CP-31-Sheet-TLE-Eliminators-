# Problem: https://codeforces.com/problemset/problem/1665/B
# Solution: https://codeforces.com/contest/1665/submission/332253434

from collections import Counter

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    a.sort()
    
    track = 1
    max_count = 1
    for i in range(1,n):
        if a[i] == a[i-1]:
            track += 1
        else:
            max_count = max(max_count, track)
            track = 1
    max_count = max(max_count, track)
            
    
    c = 0
    current_count = max_count
    
    while current_count < n:
        c += 1
        current_count *= 2

    swaps = n - max_count
    
    print(c + swaps)

    