f = lambda: map(int, input().split())
for _ in range(int(input())):
	p = list(f()); p.sort()
	cs,cw = f(); sw , ww = f()
	smin = (sw <= ww)
	c = 0

	def srd():
		global c, sw, cs
		t = p[0]//sw
		if t >= cs and cs>0:
			c += cs;  p[0]-=cs*sw; cs=0
		elif t<cs:
			if cs>0:
				c += t;  p[0]-=t*sw; cs-=t
		print(cs, cw, p[0], c)
	def axe():
		global c, cw, ww
		t = p[0]//ww
		if t >= cw and cw>0:
			c += cw;  p[0]-=cw*ww; cw=0
		elif t<cw:
			if cw>0:
				c += t;  p[0]-=t*ww; cw-=t
		print(cs, cw, p[0], c)
	def srd2():
		global c, sw, cs
		t = p[1]//sw
		if t >= cs and cs>0:
			c += cs;  p[1]-=cs*sw; cs=0
		elif t<cs:
			if cs>0:
				c += t;  p[1]-=t*sw; cs-=t
		print(cs, cw, p[1], c)
	def axe2():
		global c, cw, ww
		t = p[1]//ww
		if t >= cw and cw>0:
			c += cw;  p[1]-=cw*ww; cw=0
		elif t<cw:
			if cw>0:
				c += t;  p[1]-=t*ww; cw-=t
		print(cs, cw, p[1], c)

	if smin:
		if p[0]>=sw: srd()
		if p[0]>=ww: axe()
		if p[1]>=sw: srd2()
		if p[1]>=ww: axe2()
	else:
		if p[0]>=ww: axe()
		if p[0]>=sw: srd()
		if p[1]>=ww: axe2()
		if p[1]>=sw: srd2()
	print(c)






