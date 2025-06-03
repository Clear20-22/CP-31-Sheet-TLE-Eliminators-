# Problem: https://codeforces.com/problemset/problem/1791/C
# Solution: https://codeforces.com/contest/1791/submission/322643061

def solve():
    a = int(input())
    bin = input()
    ans = a
    
    for i in range(a):
        if bin[i] != bin[-i-1]:
            ans -= 2
        else:
            break
    
    print(max(ans,0))
    
    

for _ in range(int(input())):
    solve()
    