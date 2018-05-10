n = int(input())
num = []
n1, n2 = 0, 1
count = 0
while count < n:
    num.append(n1)
    nth = n1 + n2
    n1 = n2
    n2 = nth
    count += 1
for i in range(1, n + 1):
    if i in num and i <= n:
        print('O', end = '')
    else:
        print('o', end = '')