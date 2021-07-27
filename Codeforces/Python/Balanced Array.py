for _ in range(int(input())):
    n = int(input())
    if (n/2)%2 != 0:
        print("NO")
        continue
    else:
        a = list(x for x in range(2,n+1,2))
        b = list(x for x in range(1,n-2,2))
        #b.append(sum(a)-sum(b))
        b.append(int((n/2)**2+(n/2)-((n/2)-1)**2))
        print("YES")
        print(*a,*b)
#####   sum of first n odd numbers = n^2
#####   Sum of First n even natural numbers is = (n*n) + (1*n)
#for s in[*open(0)][1:]:n=int(s);print(*n%4and['NO']or['YES']+[*range(2,n+1,2)]+[n+n//2-1]+[*range(1,n-1,2)])
