f=lambda: map(int, input().split())
def inv(p):
    for i in range(len(p)):
        if p[i]=='1': p[i]='0'
        elif p[i]=='0': p[i]='1'
    return list(reversed(p))
    
for _ in range(int(input())):
    n = int(input())
    s = list(x for x in input())
    a = list(x for x in input())
    l = list()
    count = 0
    while s!=a:
        count += 1
        if s[0]!=a[-1]:
            s = inv(s)
            l.append(len(s))
            s = s[:-1]
            a = a[:-1]
        else:
            if s[0]=='1': 
                s[0]='0'
            else: s[0]= '1'
            l.append(1)
    print(count, *l)
     