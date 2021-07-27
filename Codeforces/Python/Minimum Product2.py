for _ in range(int(input())):
	a, b, x, y, n = map(int, input().split())
	a1 = a; b1 = b; n1 = n
	if a-n>= x:
		a -= n; n = 0
	else:
		n -= a-x
		a -= a-x
		if b-n>=y: b -= n
		else: b -= b-y
	if b1-n1>= y:
		b1 -= n1; n1 = 0
	else:
		n1 -= b1-y
		b1 -= b1-y
		if a1-n1>=x: a1 -= n1
		else: a1 -= a1-x
	print(min(a*b, a1*b1))