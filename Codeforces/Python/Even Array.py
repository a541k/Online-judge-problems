for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    ow = ew = 0
    for i in range(n):
        if i%2 == 0 and a[i]%2 != 0: ew += 1
        elif i%2 != 0 and a[i]%2 == 0: ow += 1
    print(-1 if ew!=ow else ew)