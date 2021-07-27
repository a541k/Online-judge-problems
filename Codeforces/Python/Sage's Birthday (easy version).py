#n = int(input())
#a = sorted(map(int, input().split()))
#print(n//2 - (n%2==0))
#l = list()
#t1 = a[:n//2]
#t2 = a[n//2: n-(n%2==1)]
##print(t1, t2)
#for i in range(n//2): l.append(t2[i]); l.append(t1[i])
#if n%2 == 1: l.append(a[-1])
#print(*l)


n = int(input())
a = sorted(list(map(int,input().split())))
for i in range(0,n-1,2):
	a[i],a[i+1] = a[i+1],a[i]
print((n-1)//2)
print(*a)
