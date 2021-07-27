import math
f = lambda: map(int, input().split())
for _ in range(int(input())):
	n, x = f()
	print(1 if n<3 else math.ceil((n-2)/x)+1)