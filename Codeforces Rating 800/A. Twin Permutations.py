# Problem: https://codeforces.com/problemset/problem/1831/A
# Solution: https://codeforces.com/contest/1831/submission/332189131

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    for i in arr:
        print(n+1-i, end=' ')
    print()  