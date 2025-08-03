# Problem: https://codeforces.com/problemset/problem/1875/A
# Solution: https://codeforces.com/contest/1875/submission/332259162

for _ in range(int(input())):
    n,a,b = map(int, input().split())
    
    arr = list(map(int, input().split()))

    ans = a
    for i in arr:
        ans += min(n - 1,i)
    print(ans)
