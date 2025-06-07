# Problem: https://codeforces.com/contest/1312/problem/B
# Solution: https://codeforces.com/contest/1312/submission/323196714

def solve():
    n = int(input())
    arr = list(map(int,input().split()))
    
    arr.sort(reverse=True)
    
    for ele in arr:
        print(ele,end=' ')
    print()

for _ in range(int(input())):
    solve()