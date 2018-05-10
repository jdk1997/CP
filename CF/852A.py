l = int(input())
n = input()
tot = 0
for i in range(3):
	tot = 0
	for i in range(len(n)):
		if i == len(n) - 1:
			print(n[i])
		else:
			print(n[i] + '+', end = '')
	for i in n:
		tot += int(i)
		n = str(tot)
