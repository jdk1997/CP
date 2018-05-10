flg, n = int(input()), 0
a = list(map(int, input().split()))
b = list(map(int, input().split()))
b.sort(reverse = True)
if sum(a) <= sum(b[0:2]):
	print('YES')
else:
	print('NO')
