for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(0 , n):
        if i%2 == 0:
            if a[i]>0:
                a[i] = -a[i]
        else:
            if a[i]<0:
                a[i] = -a[i]
    print(*a)
        