# Problem: https://codeforces.com/problemset/problem/1829/B
# Solution: https://codeforces.com/contest/1829/submission/322654744

def solve():
    a = int(input())
    arr = list(map(int,input().split()))
    ans = []
    for i in range(a):
        if arr[i] == 0:
            ans.append(i)
    
    if len(ans)== 0 or len(ans) == 1 or len(ans) == a:
        print(len(ans))
        return
    
    finalAns = 0
    track = 1
    for i in range(1,len(ans)):
        if ans[i-1] + 1 == ans[i]:
            track += 1
        else:
            track = 1
        finalAns = max(finalAns,track)
    
    print(finalAns)
    
    

for _ in range(int(input())):
    solve()
    