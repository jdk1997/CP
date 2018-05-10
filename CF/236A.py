name = input()
l = []
for i in name:
	if i in l:
		pass
	else:
		l.append(i)
if len(l) % 2 == 0:
	print('CHAT WITH HER!')
else:
	print('IGNORE HIM!')

