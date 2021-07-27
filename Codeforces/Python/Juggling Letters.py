for _ in range(int(input())):
	n = int(input())
	s = ''
	f = 0
	for i in range(n): s = s + input()
	for i in range(len(s)):
		if s.count(s[i])%n != 0: f = 1; break;
	print('NO' if f==1 else 'YES')