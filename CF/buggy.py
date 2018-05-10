n = int(input())
s = input()
x, y = 0, 0
pos = []
for i in range(len(s)):
	if s[i] == 'U':
		y += 1
	elif s[i] == 'D':
		y -= 1
	elif s[i] == 'R':
		x += 1
	elif s[i] == 'L':
		x -= 1
z = abs(x) + abs(y)
print(n - z)

