for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	cost = 0
	for i in range(n):
		if a[i]>0:
			for j in range(i+1, n):
				if a[j]<0:
					t = min(abs(a[i]),abs(a[j]))
					a[i] -= t
					a[j] += t
					if a[i]==0: break
	for i in sorted(a, reverse = True):
		if i>0: cost += i
		else: break
	print(cost)