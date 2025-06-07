# Problem: https://codeforces.com/problemset/problem/1362/A
# Solution: 

def solve():
    n, m = map(int,input().split())
    need = 0
    store = [(n,need)]
    idx = 0
    val = m
    
    while True:
        if store[idx][0] == m:
            print(need)
            return
        if val < n:
            print(-1)
            return
        
        store.append((m))
        


for _ in range(int(input())):
    solve()