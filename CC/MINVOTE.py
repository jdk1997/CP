t = int(input())
for _ in range(t):
    n = int(input())
    s = list(map(int, input().split()))
    votes = []
    for i in range(n):
        cnt = 0
        for j in range(i + 1, n):
            if sum(s[i : j]) <= s[j]:
                cnt += 1
        votes.append(cnt)
    for x in votes:
        print(cnt, end = ' ')
    print()