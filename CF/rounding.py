n = int(input())
str_n = str(n)
diff = int(str_n[len(str_n) - 1]) - 0
if diff <= 5:
	print(n - diff)
else:
	print(n + (10 - diff))
