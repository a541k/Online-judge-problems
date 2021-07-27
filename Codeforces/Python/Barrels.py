#import math
f = lambda:map(int, input().split())
for _ in range(int(input())):
	n, k = f()
	a = sorted(list(f()), reverse = True)
	if k>n: print(sum(a))
	else:
		a = a[:k+1]
		print(sum(a))
