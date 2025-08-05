# Problem: https://codeforces.com/contest/1624/problem/B
# Solution: https://codeforces.com/contest/1624/submission/332546467

t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    ok = False
    
    tmp = 2*b - c
    if tmp > 0 and tmp % a == 0:
        ok = True

    if (a + c) % 2 == 0:
        tmp = (a + c) // 2
        if tmp > 0 and tmp % b == 0:
            ok = True
    tmp = 2*b - a
    if tmp > 0 and tmp % c == 0:
        ok = True
    
    print("YES" if ok else "NO")