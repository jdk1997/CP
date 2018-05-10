n, m = map(int, input().split())
flag = 0
for i in range(1, n + 1):
	if i % 2 == 1:
		print('#' * m)
	elif i % 2 == 0:
		if flag == 0:
			print('.' * (m - 1) + '#')
			flag = 1
		elif flag == 1:
			print('#' + '.' * (m - 1))
			flag = 0
