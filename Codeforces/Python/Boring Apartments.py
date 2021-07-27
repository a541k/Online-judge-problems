f = lambda:map(int,input().split())
for _ in range(int(input())):
	n = input()
	l = list()
	for i in range(1,10):
		l.append(str(i)*1)
		l.append(str(i)*2)
		l.append(str(i)*3)
		l.append(str(i)*4)
	index = l.index(n)
	l = l[:index+1]
	print(len(''.join(map(str, l))))

