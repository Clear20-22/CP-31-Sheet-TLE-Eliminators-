# Problem: https://codeforces.com/problemset/problem/1744/C
# Solution: https://codeforces.com/contest/1744/submission/323177405

def solve():
    n, c = input().split()
    # c = input()
    s = input()
    s += s
    ans = 0
    track = 0
    tr = False
    for ele in s:
        if ele == 'g':
            ans = max(ans,track)
            track = 0
            tr = False
        elif ele == c and not tr:
            track += 1
            tr = True
        elif tr:
            track += 1
    
    print(ans)
    

for _ in range(int(input())):
    solve()