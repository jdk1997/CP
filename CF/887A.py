s = input()
ind = []
if '1' not in s:
	print('NO')
else:
	for i in range(len(s)):
		if s[i] == '1':
			ind.append(i)
	for i in ind:
		if s[i:len(s)].find('1000000') > -1:
			print('YES')
