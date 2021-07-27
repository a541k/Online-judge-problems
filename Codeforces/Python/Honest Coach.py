#for _ in range(int(input())):
#    n = int(input()); a = list(map(int, input().split()))
#    a.sort()
#    l = list()
#    for i in range(n-1):
#        l.append(a[i+1] - a[i])
#    print(min(l))
    
    
for _ in range(int(input())):
    input();a = sorted(map(int, input().split())) #returns sorted list
    print(min(y-x for x,y in zip(a,a[1:])))