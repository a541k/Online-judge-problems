s, n = map(int, input().split())
dragon = list(); flag = 0
for _ in range(n):
    ds, bs = map(int, input().split())
    dragon.append([ds, bs])
for ds,bs in sorted(dragon, key = lambda dragon: dragon[0]):
#    print(ds, bs)
    if ds>= s:
        flag = 1
    else:
        s += bs
print("NO" if flag else "YES")