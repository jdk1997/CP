n = int(input())
spec = set([1, 2, 3])
curr_players = set([1, 2])
flg = 'YES'
for i in range(n):
	winner = int(input())
	if winner not in curr_players:
		flg = 'NO'
		break
	else:
		curr_players = spec - curr_players
		curr_players.add(winner)
		flg = 'YES'
print(flg)

