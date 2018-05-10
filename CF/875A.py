n = int(input())
cnt, tot = 0, 0
ans = []
for i in range(n):
	tot = 0
	for j in str(i):
		tot += int(j)
	if i == n - tot:
		ans.append(i)
		cnt += 1
ans.sort()
print(cnt)
for i in ans:
	print(i)
