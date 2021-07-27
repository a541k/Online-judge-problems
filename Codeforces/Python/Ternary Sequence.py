f = lambda: map(int, input().split())
for _ in range(int(input())):
	za, oa, ta = f()
	zb, ob, tb = f()
	if ta >= ob:
		ta = ta - ob
		s = ob * 2
		ob = 0
	else:
		s = ta * 2
		ob = ob -ta
		ta = 0
	if tb <= ta:
		ta = ta - tb
		tb = 0
	else:
		tb = tb - ta
		ta = 0
	if tb >= za:
		tb = tb - za
		za = 0
	else:
		za = za - tb
		tb = 0
	if tb and oa:
		s = s - 2 * min(tb, oa)
	print(s)
