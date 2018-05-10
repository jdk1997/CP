n = int(input())
x = 0
for i in range(n):
	s = input()
	if s[0] == '+' and s[1] == '+' or s[len(s) - 2] == '+' and s[len(s) - 1] == '+':
		x += 1
	elif s[0] == '-' and s[1] == '-' or s[len(s) - 2] == '-' and s[len(s) - 1] == '-':
		x -= 1
print(x)
