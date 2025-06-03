# Problem: https://codeforces.com/problemset/problem/1890/A
# Solution: https://codeforces.com/contest/1890/submission/322529085

def solve():
    n = map(int,input().split())
    arr = list(map(int,input().split()))
    
    store = {}
    
    for ele in arr:
        store[ele] = store.get(ele,0)+1
    
    if len(store) > 2:
        print("No")
    elif  len(store) == 1:
        print("Yes")
    else:
        key = list(store.keys())
        value = list(store.values())
        
        if abs(value[0] - value[1]) == 0 or abs(value[0] - value[1]) == 1:
            print("YEs")
        else:
            print("NO")

t = int(input())
for _ in range(t):
    solve()
    