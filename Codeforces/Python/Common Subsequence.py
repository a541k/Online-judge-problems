f= lambda:map(int, input().split())
for _ in range(int(input())):
    input()
    a = list(f())
    b = list(f())
    x = set(a)
    y = list(x.intersection(b))
    if y: print('YES');print('1', y[0])
    else: print('NO')