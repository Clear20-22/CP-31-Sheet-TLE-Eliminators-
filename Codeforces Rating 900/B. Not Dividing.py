# Problem: https://codeforces.com/problemset/problem/1794/B
# Solution: https://codeforces.com/contest/1794/submission/322906716

def solve():
    n = int(input())
    arr = list(map(int,input().split()))
    
    for ele in range(n):
        if arr[ele] == 1:
            arr[ele] += 1
    
    for i in range(1,n):
        if arr[i]%arr[i-1] == 0:
            arr[i] += 1
    
    for ele in arr:
        print(ele,end=' ')
    print()

for _ in range(int(input())):
    solve()