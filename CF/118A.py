s = input()
x = ''
vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', 'y', 'Y']
for i in s:
	if i not in vowels:
		if str.islower(i):
			x = x + '.' + i
		else:
			x = x + '.' + chr(ord(i) + 32)
	else:
		pass
print(x)  
