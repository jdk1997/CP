n = int(input())
odd = 'I hate'
even = 'I love'
for i in range(1, n + 1):
	if i % 2 == 0 and i < n:
		print(even + ' that', end = ' ')
	elif i % 2 == 1 and i < n:
		print(odd + ' that', end = ' ')
	elif i % 2 == 0 and i == n:
		print(even + ' it')
	elif i % 2 == 1 and i == n:
		print(odd + ' it')