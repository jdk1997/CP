import math
mon = int(input())
cola = int(input())
bar = int(input())
x, y, flg, ans1, ans2 = 0, 0, 0, 0, 0
lim = math.floor(mon / min(cola, bar))
if mon / cola != 0:
	for x in range(0, lim + 1):
		for y in range(0, lim + 1):
			if((y * cola) +(x * bar)) == mon:
				ans1 = y
				ans2 = x
				flg = 1
				break
if flg == 1:
	print('YES')
	print(ans1, ans2)
elif flg == 0:
	print('NO')
			
