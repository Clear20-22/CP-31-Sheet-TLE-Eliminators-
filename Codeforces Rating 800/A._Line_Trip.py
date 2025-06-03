# Problem: https://codeforces.com/problemset/problem/1901/A

def solve():
    n, m = map(int,input().split())
    arr = list(map(int,input().split()))
    arr.insert(0,0)
    arr.append(m)
    
    ans = 0
    
    ans = max(ans,2*(arr[-1] - arr[-2]))
    for i in range(1,len(arr)):
        ans = max(ans,arr[i] - arr[i-1])
    
    print(ans)

t = int(input())
for _ in range(t):
    solve()
    