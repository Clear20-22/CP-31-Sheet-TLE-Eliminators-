# Problem: https://codeforces.com/problemset/problem/1766/A
# Solution: https://codeforces.com/contest/1766/submission/322761703

def count_extremely_round(n):
    s = str(n)
    length = len(s)
    count = 9 * (length - 1)
    first_digit = int(s[0])
    for d in range(1, first_digit):
        count += 1
    if int(str(first_digit) + '0' * (length - 1)) <= n:
        count += 1
    return count

t = int(input())
for _ in range(t):
    n = int(input())
    print(count_extremely_round(n))

