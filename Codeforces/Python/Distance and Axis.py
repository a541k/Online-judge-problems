import math
f = lambda: map(int, input().split())
for _ in range(int(input())):
	n, k = f()
	if k == 0 and n%2== 0: print(0)
	elif k == 0 and n%2== 1: print(1)
	elif k%2 ==1 and n%2== 1 and k<n: print(0)
	elif k%2 == 1 and n%2 == 0 and k<=n-1: print(1)
	else: print(abs(n-k))
