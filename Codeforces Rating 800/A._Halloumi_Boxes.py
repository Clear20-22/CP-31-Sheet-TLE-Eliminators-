# Problem: https://codeforces.com/problemset/problem/1903/A

def solve():
    n,m = map(int,input().split())
    arr = list(map(int, input().split()))
    if arr != sorted(arr) and m == 1:
        print("NO")
    else :
        print("YES") 
 
 
t = int(input())
for _ in range(t):
    solve()