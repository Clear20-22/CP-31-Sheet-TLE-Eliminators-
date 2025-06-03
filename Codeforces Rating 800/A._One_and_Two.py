# Problem: https://codeforces.com/problemset/problem/1788/A


def solve():
    n = int(input())
    arr = list(map(int,input().split()))
    ans = [arr[0]]
    for i in range(1,n):
        ans.append(ans[-1]*arr[i])
    for i in range(0,n-1):
        if ans[-1] == ans[i]*ans[i]:
            print(i+1)
            return
    print(-1)
for _ in range(int(input())):
    solve()