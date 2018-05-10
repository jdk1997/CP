n = int(input())
s = input()
vow = ['a', 'e', 'i', 'o', 'u', 'y']
print(s[0], end = '')
for i in range(1, n):
    if s[i] not in vow:
        print(s[i], end = '')
    elif s[i] in vow and s[i - 1] not in vow:
        print(s[i], end = '')

#print(ans)