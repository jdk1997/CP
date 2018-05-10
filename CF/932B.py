n = int(input())
for i in range(n):
    cnt = 0
    l, r, k = map(int, input().split())
    for i in range(l, r + 1):
        prod = 1
        num = str(i)
        while prod > k:
            if a != '0':
                prod *= int(a)
            else:
                pass
            if prod == k:
                cnt += 1
            else:
                pass
    print(cnt)