n = int(input())

def leaf(node):
	global child
	if child[node] == []:
		return 1
	return 0

def check():
	global child
	for node in child:
		if not leaf(node):
			if sum(list(map(leaf,child[node]))) < 3:
				print('No')
				break
	else:
		print('Yes')

child = {i:[] for i in range(1,n+1)}

for i in range(2,n+1):
	p = int(input())
	child[p].append(i)

check()