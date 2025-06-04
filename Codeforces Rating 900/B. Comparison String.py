# Problem: https://codeforces.com/problemset/problem/1837/B
# Solution: https://codeforces.com/contest/1837/submission/322896421

def solve():
    n = int(input())
    s = input()
    ans = 0
    track = 2
    for i in range(1,n):
        if s[i-1]==s[i]:
            track += 1
        else :
            track = 2
        ans = max(ans,track)
    
    ans = max(ans,track)
    
    print(ans)
        
for _ in range(int(input())):
    solve()