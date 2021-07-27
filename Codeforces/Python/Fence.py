f = lambda: map(int, input().split())
for _ in range(int(input())):
	a, b, c = f()
	print(max(a,b,c)+min(a,b,c))