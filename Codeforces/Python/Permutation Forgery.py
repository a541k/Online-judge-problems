f = lambda: map(int, input().split())
for _ in range(int(input())):
	n = int(input())
	a = list(f())
	print(*a[::-1])