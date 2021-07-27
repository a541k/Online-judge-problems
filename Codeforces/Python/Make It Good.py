f = lambda: map(int, input().split())
for _ in range(int(input())):
    n = int(input());a = list(f())
    p = n-1
    while p and a[p]<=a[p-1]: p-=1
    while p and a[p]>=a[p-1]: p-=1
    print(p)
    