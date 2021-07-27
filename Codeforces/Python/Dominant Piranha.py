for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	if max(a)==min(a):print(-1);continue
	t = 1
	d=a[0]
	for i in range(1,n):
		if d>a[i]:
			d+=1
		else:
			if d!=a[i]:t=i+1
			d = a[i]

	print(t)