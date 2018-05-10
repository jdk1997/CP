n = int(input())
if n == 1:
	cube1 = list(map(int, input().split()))
	print(max(l))
elif n == 2:
	cube1 = list(map(int, input().split()))
	cube2 = list(map(int, input().split()))
	dig1, dig2 = max(cube1), max(cube2)
	print(str(max(dig1, dig2)) + str(min(dig1, dig2)))
elif n == 3:
	cube1 = list(map(int, input().split()))
	cube2 = list(map(int, input().split()))
	cube3 = list(map(int, input().split()))
	dig1, dig2, dig3 = max(cube1), max(cube2), max(cube3)
	print(str(max(dig1, dig2, dig3)) + str(min(dig1, dig2, dig3)))

	
