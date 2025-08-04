# Problem: https://codeforces.com/problemset/problem/1607/B
# Solution: # Problem: https://codeforces.com/problemset/problem/1607/B
# Solution: 

for _ in range(int(input())):
    n, m = map(int, input().split())

    if m < 4:
        for i in range(1, m+1):
            if n % 2 == 0:
                n -= i
            else:
                n += i
    else:
        for i in range(m//4 * 4 + 1, m+1):
            if n % 2 == 0:
                n -= i
            else:
                n += i

    print(n)

for _ in range(int(input())):
    n, m = map(int, input().split())

    if m < 4:
        for i in range(1, m+1):
            if n % 2 == 0:
                n -= i
            else:
                n += i
    else:
        for i in range(m//4 * 4 + 1, m+1):
            if n % 2 == 0:
                n -= i
            else:
                n += i

    print(n)