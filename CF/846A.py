n = int(input())
games = list(map(int, input().split()))
rem = 0
for i in range(1, n - 1):
	if games[i] == 0 and games[i + 1] == 1:
		rem += 1
	elif games[i] == 1 and games[i] == 1 and games[i + 1] == 0:
		rem += 1
	else:
		pass
print(rem + 1)

