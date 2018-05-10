l = list(map(int, input().split()))
if sum(l) & 1:
	print('NO')
else:
	ans = 'NO'
	mid = sum(l) // 2
	for i in range(4):
		for j in range(i + 1, 5):
			for k in range(j + 1, 6):
				if l[i] + l[j] + l[k] == mid:
					ans = 'YES'
					break
					
	print(ans)

	
