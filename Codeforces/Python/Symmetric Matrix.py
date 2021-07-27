import math
f = lambda: map(int, input().split())
for _ in range(int(input())):
	n, m = f()
	a = list()
	flag = 0
	for i in range(n):
		t1 = list(f())
		t2 = list(f())
		t3 = t1+t2
		if t3[1]==t3[2]: flag = 1
	print("YES" if flag and m%2==0 else "NO")


