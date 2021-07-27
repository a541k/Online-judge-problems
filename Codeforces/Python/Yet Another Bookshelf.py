for _ in range(int(input())):
	n = int(input())
	s = input()
	s = ''.join(s.split())
	s = s.split('1')
	s = '1'.join(s)
	s=s.strip('0')
	print(s.count('0'))



#	t = sorted(s.split('0'), key = len, reverse = True)
#	s= ' '.join(s).split()

