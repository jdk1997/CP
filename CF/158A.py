n, k = map(int, input().split())
scores = list(map(int, input().split()))
cutoff = scores[k - 1]
qualified = 0
for i in scores:
	if i >= cutoff and i > 0:
		qualified += 1
print(qualified)
