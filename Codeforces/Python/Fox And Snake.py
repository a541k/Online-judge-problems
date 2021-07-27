m, n = map(int, input().split())
a = '#'*n
b = '.'*(n-1)+'#'
c = '#'+'.'*(n-1)
for i in range(1,m+1):
    if i%2 == 1: print(a)
    elif i%4 == 0: print(c)
    else: print(b)