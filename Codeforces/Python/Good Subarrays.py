for _ in range(int(input())):
	n = int(input())
	s = input()
	good = s.count('1')
	for i in range(2, n+1):
		for j in range(0, n):
			#print('s[j:j+i]',s[j:j+i],'i', i, 'j',j)
			if sum(map(int, s[j:j+i]))==len(s[j:j+i]) and j+i<=n:good += 1#; print(s[j:j+i],"good")
	print(good)