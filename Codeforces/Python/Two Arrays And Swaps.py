f = lambda: map(int, input().split())
for _ in range(int(input())):
    n,k = f(); i = 0
    a = sorted(list(f())); b = sorted(list(f()), reverse = True)
    while k>0:
        if a[i]<b[i]: a[i] = b[i]
        k-=1; i +=1
    print(sum(a))



#R=lambda:map(int,input().split())
#t,=R()
#for _ in[0]*t:n,k=R();print(sum(map(max,sorted(R()),sorted(R())[:-1-k:-1]+[0]*n)))
