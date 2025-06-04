# Problem: https://codeforces.com/problemset/problem/1606/A
# Solution: https://codeforces.com/contest/1606/submission/322818166

def solve():
    a = input()
    
    if a[0] == a[-1]:
        print(a)
    else:
        a = a[-1] + a[1:]
        print(a)

for _ in range(int(input())):
    solve()