f = lambda: map(int, input().split())
for _ in range(int(input())):
    l, r = f()
    if min(l, r)*2 > max(l, r):
        print(-1, -1)
    else: print(min(l, r), 2*min(l, r))