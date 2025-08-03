# Problem: https://codeforces.com/problemset/problem/1582/B
# Solution: https://codeforces.com/contest/1582/submission/332274456

for _ in range(int(input())):
    n = int(input())
    s = list(map(int, input().split()))
    cnt = 0
    cnt1 = 0
    for i in range(n):
        if s[i] == 1:
            cnt += 1
        if s[i] == 0:
            cnt1 += 1
    
    print((2**cnt1)*cnt)
