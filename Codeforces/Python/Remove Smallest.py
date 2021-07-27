def check():
	f = 0
	for i in range(n-1):
		if a[i+1] - a[i]>1: f = 1; break
	return f
for _ in range(int(input())):
	n=int(input()); a = sorted(map(int, input().split()))
	print('NO' if check() else 'YES')