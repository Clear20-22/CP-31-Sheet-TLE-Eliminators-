# Problem: https://codeforces.com/problemset/problem/1850/D
# Solution: https://codeforces.com/contest/1850/submission/332232168

for _ in range(int(input())):
    n, m = map(int, input().split())

    arr = list(map(int, input().split()))
    arr.sort()

    ans = 1
    count = 1

    for i in range(1,n,1):
        if arr[i] - arr[i-1] <= m:
            count += 1
        else:
            count = 1
        ans = max(ans, count)

    print(n - ans)

