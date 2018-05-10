n = int(input())
flg = 0
if n == 4 or n == 7:
	print('YES')
else:	
	if '4' in str(n) and '7' in str(n) and '0' not in str(n) and '1' not in str(n) and '2' not in str(n) and '3' not in str(n) and '5' not in str(n) and '6' not in str(n) and '8' not in str(n) and '9' not in str(n):
		print('YES')
	else:
		for i in range(1, n):
			if n % i == 0:
				if len(str(i)) > 1:
					if ('4' in str(i) and '7' in str(i)):
						flg = 1
						break
				elif i == 4 or i == 7:
					flg = 1
					break
			else:
				flg = 0
		if flg == 1:
			print('YES')
		elif flg == 0:
			print('NO')

