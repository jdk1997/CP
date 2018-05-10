import math
t = int(input())
for _ in range(t):
    n, h = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    if h == 1 and n >= 1:
        print(sum(a))
    else:
        for i in range(1, max(a)):
            cnt = 0
            if i * h > sum(a):
                ans = i
                for k in a:
                    if i - k <= 0:
                        cnt += 1
                    elif i - k >= 1:
                        cnt += math.ceil(k / i)
                if cnt <= h:
                    print(i)
                    break
            else:
                pass        
