no_of_coins = int(input())
coins = list(map(int ,input().split()))

coins.sort()

x = no_of_coins - 1
while sum(coins[:x]) >= sum(coins[x:]):
	x -= 1
	if x == -1:
		break
print(no_of_coins - x)
		
