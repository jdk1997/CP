t = int(input())
for _ in range(t):
    cnt = 0
    n = int(input())
    a = list(map(int, input().split()))
    if len(set(a)) == len(a):
        print(0)
    else:
        print(n - len(set(a)))