word = input()
if str.islower(word[0]):
	print(chr(ord(word[0])-32) + word[1:len(word)])
else:
	print(word)
 
