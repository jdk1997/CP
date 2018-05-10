n = int(input())
problems = 0
for i in range(n):
	prob = list(map(int, input().split()))
	if prob.count(1) >= 2:
		problems += 1
print(problems)

