for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    flag =0
    for i in range(1,n-1):
        if a[i]>a[i-1] and a[i]>a[i+1]:
            flag = 1
            break
    if flag:
        print('YES')
        print(i, i+1, i+2)
    else : print('NO')
        
