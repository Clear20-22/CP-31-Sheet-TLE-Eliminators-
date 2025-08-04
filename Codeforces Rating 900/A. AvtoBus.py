# Problem: https://codeforces.com/problemset/problem/1679/A
# Solution: https://codeforces.com/contest/1679/submission/332343531


t = int(input())
for _ in range(t):
    n = int(input())
    if n % 2 != 0 or n < 4:
        print(-1)
        continue

    min_buses = (n + 5) // 6  
    max_buses = n // 4

    if min_buses * 6 < n or max_buses * 4 > n:
        print(-1)
    else:
        print(min_buses, max_buses)
