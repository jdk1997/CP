s = input()
x = s.find('AB')
y = s.find('BA')
if y > -1 and x > -1 and s.index('B') != y:
	print('YES')
else:
	print('NO')