# Problem: https://codeforces.com/problemset/problem/1593/B
# Solution: https://codeforces.com/contest/1593/submission/332266619

for _ in range(int(input())):
    s = input()
    n = len(s)

    arr = INT_MAX = 10**9
    for i in range(n - 1, -1, -1):
        for j in range(i - 1, -1, -1):
            if (s[i] == '0' and s[j] == '0') or (s[i] == '0' and s[j] == '5') or (s[i] == '5' and s[j] == '7') or (s[i] == '5' and s[j] == '2'):
                arr = min(arr, n - i - 1 + i - j - 1)
                break
    print(arr)
