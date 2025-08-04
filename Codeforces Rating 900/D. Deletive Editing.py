# Problem: https://codeforces.com/problemset/problem/1666/D
# Solution: https://codeforces.com/contest/1666/submission/332334759

for _ in range(int(input())):
    s, t = map(str, input().strip().split())
    if len(s) < len(t):
        print("NO")
        continue
    if s == t:
        print("YES")
        continue
    store = {}
    for i in range(len(s)):
        if s[i] not in store:
            store[s[i]] = []
        store[s[i]].append(i)
    
    last = 10**9
    for i in range(len(t)-1,-1,-1):
        if t[i] not in store:
            print("NO")
            break
        if len(store[t[i]]) == 0:
            print("NO")
            break
        else:
            idx = store[t[i]].pop()
            if idx > last:
                print("NO")
                break
            last = idx
    else:
        print("YES")
