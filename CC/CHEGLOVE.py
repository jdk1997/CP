t = int(input())
for _ in range(t):
    flg, flg1 = [], []
    n = int(input())
    l = list(map(int, input().split()))
    g = list(map(int, input().split()))
    ans = ''
    tmp = g[::-1]
    for i in range(n):
        if l[i] <= g[i]:
            flg.append(1)
    for i in range(n):
        if l[i] <= tmp[i]:
            flg1.append(0)
    if flg.count(1) == n and flg1.count(0) == n:
        ans = 'both'
    elif flg1.count(0) == n:
        ans = 'back'
    elif flg.count(1) == n:
        ans = 'front'
    else:
        ans = 'none'
    print(ans)