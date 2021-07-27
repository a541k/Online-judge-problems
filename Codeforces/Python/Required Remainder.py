#for t in range(int(input())):
#    x, y, n = map(int,input().split())
#    while n >= 0:
#        if (n-y)%x == 0:
#            k = n
#            break
#        else :n-=1
#    print(k)
#        

#for t in range(int(input())): x, y, n = map(int,input().split()); print(n - n%x + y)

for t in range(int(input())): x, y, n = map(int,input().split()); print(((n-y)//x)*x +y)