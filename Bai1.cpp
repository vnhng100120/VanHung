strNew = input("Moi ban nhap")
strNew = strNew.lower()
nLen = len(strNew)
nCount = 0
nNum = int(len(strNew)/2)

for i in range (0,nNum):
	if (strNew[i] == strNew[nLen - i -1]):
		nCount +=1
if (nCount == nNum):
	print("Palindrome")
else:
	print("No palindrome")
