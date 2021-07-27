#import math
#for _ in range(int(input())):
#	n = int(input())
#	a = list(range(n,0,-1))
#	print(2)
#	for i in range(n-1):
#		print(a[1], a[0])
#		t=math.ceil((a[0]+a[1])/2)
#		a = a[1:]
#		a[0]= t
for _ in range(int(input())):
    n = int(input())
    print(2,'\n'+str(n)+' '+str(n-1))
    while n-2>=1:
        print(n,n-2)
        n-=1

