f = lambda: map(int, input().split())
for _ in range(int(input())):
	n = int(input());a = list(f());b = list(f())

	mina = min(a); minb = min(b); m = 0

	for i in range(n):
		if a[i]>mina  and b[i]>minb:
			t = min(a[i]-mina, b[i]-minb)
			a[i] -= t; b[i] -= t
			m += t
		if a[i]>mina: m += a[i] - mina
		if b[i]>minb: m += b[i] - minb
	print(m)