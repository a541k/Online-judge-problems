for _ in range(int(input())):
	s = sorted(input().split('0'), key = len, reverse = True)
	print(sum(map(len, s[::2])))