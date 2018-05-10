t = int(input())
for _ in range(t):
    n, m, x, k = map(int, input().split())
    s = input()
    evn = s.count('E')
    odd = s.count('O')
    for i in range(1, m + 1):
        if i % 2 == 0:
            if evn >= x:
                evn -= x
                n -= x
            elif evn < x:
                evn -= evn
                n -= evn
        elif i % 2 == 1:
            if  odd >= x:
                odd -= x
                n -= x
            elif odd < x:
                odd -= odd
                n -= odd
    if n <= 0:
        print('yes')
    elif odd + evn <= 0 and n > 0:
        print('no')