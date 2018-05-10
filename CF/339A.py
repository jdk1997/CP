prob = input()
digits = []
for i in prob:
	if i.isdigit() == True:
		digits.append(i)
digits.sort()
print('+'.join(digits))
	
