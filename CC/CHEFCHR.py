n = int(input())
for i in range(n):
    s = input()
    flg, cnt = 0, 0
    for i in range(len(s)):
        if s[i] == 'c' or s[i] == 'h' or s[i] == 'e' or s[i] == 'f':
            x = s[i : i + 4]
            if 'c' in x and 'h' in x and 'e' in x and 'f' in x:
                flg = 1
                cnt += 1
        else:
            pass
    if flg == 1:
        print('lovely', cnt)
    else:
        print('normal')