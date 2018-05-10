n = int(input())
maximum, flg = 10000000001, 0
ans = ''
for i in range(n):
	brand, price = input().split()
	for dig in price:
		if dig == '4' or dig == '7':
			flg = 1
		else:
			flg = 0
	if int(price) < maximum and price.count('4') > 0 and price.count('7') > 0 and price.count('4') == price.count('7') and flg == 1:
		maximum = int(price)
		ans = brand
	else:
		pass
if len(ans) > 0:
	print(ans)
else:
	print(-1)
