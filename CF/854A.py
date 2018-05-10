import math
n = int(input())
if n % 2 == 1:
	a = math.floor(n / 2)
	b = math.ceil(n / 2)
else:
	if n % 4 == 0:
		a, b = math.floor(n / 2) - 1, math.ceil(n / 2) + 1
	else:
		a, b = math.floor(n / 2) - 2, math.ceil(n / 2) + 2
print(a, b)
