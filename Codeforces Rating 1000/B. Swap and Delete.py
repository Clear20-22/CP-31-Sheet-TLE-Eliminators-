# Problem: https://codeforces.com/problemset/problem/1913/B
# Solution: https://codeforces.com/contest/1913/submission/323044639

def solve():
    s = input()
    
    _1 = s.count('1')
    _0 = s.count('0')
    ans = 0
    track = False
    
    for ele in s:
        if (_1 == 0 and ele == '0') or (_0 == 0 and ele == '1'):
            track = True
        if ele == '0' and _1 > 0 and  track == False:
            _1 -= 1
        elif ele == '1' and _0 > 0 and  track == False:
            _0 -= 1
        else:
            ans += 1

    
    print(ans)

for _ in range(int(input())):
    solve()