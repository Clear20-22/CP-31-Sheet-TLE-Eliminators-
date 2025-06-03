# Problem: https://codeforces.com/problemset/problem/1878/A
# Solution: https://codeforces.com/contest/1878/submission/322570649

def solve():
    a, b = map(int,input().split())
    arr = list(map(int,input().split()))
    ans_b = False
    for ele in arr:
        if b == ele:
            ans_b = True
            break
    if ans_b :
        print("YEs")
    else:
        print("NO")
    

for _ in range(int(input())):
    solve()
    