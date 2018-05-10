msg = input()
find = list('hello')
x = 0
for i in msg:
	if i ==  find[x]:
		x += 1
		if x == 5:
			break 
if x < 5:
	print('NO')
else:
	print('YES')
