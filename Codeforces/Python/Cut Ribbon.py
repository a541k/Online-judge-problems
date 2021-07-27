n,a,b,c = map(int, input().split())
l = sorted(list((a,b,c)))
print(n//l[0] + (n%l[0])//l[1] + ((n%l[0])%l[1])//l[1])
    