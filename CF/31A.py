n = int(input())
l = list(map(int ,input().split()))
ans, flg = [], 0
for i in range(len(l) - 1):
	if l[i] + l[i + 1] == l[i + 2]:
		flg = 1
		ans[0], ans[1], ans[2] = l[i + 2], l[i + 1], l[i]
		break
if flg == 1:
	for i in ans:
		print(i, end = ' ')
elif flg == 0: 
	print(-1)
