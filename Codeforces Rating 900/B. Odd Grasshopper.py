# Problem: https://codeforces.com/problemset/problem/1607/B
# Solution: https://codeforces.com/contest/1607/submission/332407937

for _ in range(int(input())):
    n, m = map(int, input().split())

    for i in range(m//4 * 4 + 1, m+1):
        if n % 2 == 0:
            n -= i
        else:
            n += i

    print(n)
