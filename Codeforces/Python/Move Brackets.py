for _ in range(int(input())):
	input();s = input()
	while '()' in s: s=s.replace('()', '')
	print(len(s)//2)


