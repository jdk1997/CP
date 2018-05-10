from math import factorial
t = int(input())
for _ in range(t):
    n = int(input())
    tmp = factorial(n)
    ans =  0
    s_num = str(tmp)
    for i in range(len(s_num)):
        ans += int(s_num[i])
    print(ans)