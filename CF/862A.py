n, x = map(int, input().split())
l = list(map(int, input().split()))
cnt = 0
l.sort()
for i in range(0, x + 1):
	if i < x and i not in l:
		cnt += 1
	elif x in l:
		cnt += 1
print(cnt)
		
