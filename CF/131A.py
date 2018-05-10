s = input()
ans = ''
if s[0].islower() and s[1:len(s)].isupper():
	for i in s[1:len(s)]:
		ans = ans + chr(ord(i) + 32)
	print(chr(ord(s[0]) - 32) + ans)
elif s.isupper():
	for i in s[1:len(s)]:
		ans = ans + chr(ord(i) + 32)
	print(chr(ord(s[0]) + 32) + ans)
elif len(s) == 1 and s.islower():
	print(chr(ord(s[0]) - 32))
else:
	print(s)
	
