# Problem: https://codeforces.com/problemset/problem/1610/B
# Solution: https://codeforces.com/contest/1610/submission/323361119

def check(x: int, arr: list) -> bool:
    l, r = 0, len(arr) - 1
    while l < r:
        while l < r and arr[l] == x:
            l += 1
        while l < r and arr[r] == x:
            r -= 1
        if arr[l] != arr[r]:
            return False
        l += 1
        r -= 1
    return True
 

def solve():
    n = int(input())
    arr = list(map(int,input().split()))
    if n == 1:
        print("Yes")
        return
    
    for i in range(n):
        if arr[i] != arr[-1-i]:
            if check(arr[i],arr):
                print("YES")
                return
            if check(arr[-i-1],arr):
                print("YES")
                return
            break
        
    if arr == arr[::-1]:
        print("YES")
        return
    
    print("NO")

for _ in range(int(input())):
    solve()