# Problem: https://codeforces.com/problemset/problem/1696/B
# Solution: https://codeforces.com/contest/1696/submission/322837128

def solve():
    n = int(input())
    arr = list(map(int, input().split()))

    while arr and arr[0] == 0:
        arr.pop(0)
    while arr and arr[-1] == 0:
        arr.pop()

    count = 0
    i = 0
    while i < len(arr):
        if arr[i] != 0:
            count += 1
            while i < len(arr) and arr[i] != 0:
                i += 1
        else:
            i += 1

    print(min(count, 2))

t = int(input())
for _ in range(t):
    solve()
