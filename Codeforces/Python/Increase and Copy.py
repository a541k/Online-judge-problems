import math
f = lambda: map(int, input().split())
for _ in range(int(input())):
	a = int(input())
	t,c = 0,0
	while c<a:
		t = t+1
		c = (t**2+t)/2
	print(t)