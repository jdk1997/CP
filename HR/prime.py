#!/bin/python3

import sys
def findprime(n):
	num = []
	prime = [True for i in range(n + 1)]
	p = 2
	while p * p <= n:
		if prime[p] == True:
			for i in range(p * 2, n + 1, p):
				prime[i] = False
		p += 1
	for p in range(2, n + 1):
		if prime[p] == True:
			num.append(p)
	return num
if __name__ == "__main__":
	q = int(input().strip())
	for a0 in range(q):
		startVal, endVal = input().strip().split(' ')
		startVal, endVal = [int(startVal), int(endVal)]
		p1 = findprime(startVal)
		p2 = findprime(endVal)
		p1, p2 = set(p1), set(p2)
		p3 = p1.union(p2)
		if len(p3) > 1:
			p4 = [b for b in p3 if b in range(startVal, endVal + 1)]
		if len(p4) > 1:
			print(max(p4) - min(p4))
		else:
			print(0)
		
