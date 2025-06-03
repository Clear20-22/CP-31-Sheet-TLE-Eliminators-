# Problem: https://codeforces.com/problemset/problem/1789/A
# Solution: https://codeforces.com/contest/1789/submission/322666072

from math import gcd

def solve():
    n = int(input())
    arr = list(map(int,input().split()))
    # check = 0
    # ans = False
    for i in range(n):
        for j in range(i+1,n):
            if gcd(arr[i],arr[j]) == 1 or gcd(arr[i],arr[j]) == 2:
                print("Yes")
                return
    print("No")

for _ in range(int(input())):
    solve()