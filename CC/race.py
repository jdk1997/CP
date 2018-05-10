t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    b[b.index(max(b))] = 0
    a[a.index(max(a))] = 0
    if sum(a) > sum(b):
        print('Bob')
    elif sum(a) < sum(b):
        print('Alice')
    elif sum(a) == sum(b):
        print('Draw')