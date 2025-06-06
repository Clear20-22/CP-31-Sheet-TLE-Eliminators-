# Problem: https://codeforces.com/problemset/problem/1155/A
# Solution: https://codeforces.com/contest/1155/submission/323118632

def solve():
    n = int(input())
    s = input()
    
    store = [(char,idx) for (idx,char) in enumerate(s)]
    store.sort()
    
    for i in range(n):
        if store[i][1] != i:
            print("YES")
            print(i+1,store[i][1]+1)
            return
    
    print("NO")

solve()