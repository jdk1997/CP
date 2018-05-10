pattern = input()
if pattern.find('0000000') > -1 or pattern.find('1111111') > -1:
    print('YES')
else:
    print('NO')
