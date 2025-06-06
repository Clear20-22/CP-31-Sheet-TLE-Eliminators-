# Problem: https://codeforces.com/contest/1715/problem/B
# Solution: https://codeforces.com/contest/1715/submission/323089992

def solve():
    n, k, b, s = map(int,input().split())
    minValue = k*b
    maxValue = n*(k-1) + b*k
    
    # print(minValue)
    # print(maxValue) 
    
    if minValue <= s <= maxValue:
        
        for i in range(0,n):
            if i == 0:
                if s >= k*b + k-1:
                    print(k*b + k-1,end=' ')
                    s -= k*b + k-1
                else:
                    print(s,end=' ')
                    s -= s
            elif s > 0:
                if s > k-1:
                    s -= k-1
                    print(k-1,end=' ')
                else:
                    print(s,end=' ')
                    s -= s
            else:
                print(0,end=' ')
        print()
    else:
        print(-1)
        

for _ in range(int(input())):
    solve()