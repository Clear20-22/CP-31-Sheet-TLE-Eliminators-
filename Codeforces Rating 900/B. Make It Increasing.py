# Problem: https://codeforces.com/problemset/problem/1675/B
# Solution: https://codeforces.com/contest/1675/submission/332395936

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    possible = True

    for i in range(n - 2, -1, -1):
        if a[i] >= a[i + 1]:
            if a[i+1] == 0:
                possible = False
                break
            x = 0
            while a[i] // (2 ** x) >= a[i + 1]:
                x += 1
            a[i] //= 2 ** x
            ans += x
        if a[i] >= a[i+1]:
            possible = False
            break

    if not possible:
        print(-1)
    else:
        print(ans)
  
