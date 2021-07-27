from math import ceil
n = int(input())
a = sorted(map(int, input().split()))
s1 = s2 = 0
c = a[-1]**(1/(n-1))
for i in range(n):
	s1 += abs(a[i]-ceil(c)**i)
	s2 += abs(a[i]-int(c)**i)
print(min(s1, s2))