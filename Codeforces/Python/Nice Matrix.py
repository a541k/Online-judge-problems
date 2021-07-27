import math
f = lambda: map(int, input().split())
for _ in range(int(input())):
	n, m = f()
	a = list()
	cost = 0
	for i in range(n):
		t = list(f())
		a.append(t)
	for i in range(math.ceil(n/2)):
		for j in range(math.ceil(m/2)):
			t = a[i][j]; k = 1
			if m-(j+1)-j>0:
				t+= a[i][m-(j+1)];k+=1
			if n-(i+1)-i>0:
				t+= a[n-(i+1)][j];k+=1
			if m-(j+1)-j>0 and n-(i+1)-i>0:
				t+= a[n-(i+1)][m-(j+1)];k+=1
			av = round(t/k)
			cost += abs(av-a[i][j]);
			if m-(j+1)-j>0:
				cost += abs(av-a[i][m-(j+1)])
			if n-(i+1)-i>0:
				cost+= abs(av-a[n-(i+1)][j])
			if m-(j+1)-j>0 and n-(i+1)-i>0:
				cost += abs(av- a[n-(i+1)][m-(j+1)])
			#print('av is', cost)
#			if k ==4:
#				print(a[i][j],a[i][m-(j+2)],a[n-(i+2)][m-(j+2)],a[n-(i+2)][j])
	print(cost)
