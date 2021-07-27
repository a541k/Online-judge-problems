for _ in range(int(input())):
    m,n = map(int, input().split())
    arr = [list(map(int, input().split())) for index in range(m)]
    flag = 0
    for i in range(m):
        for j in range(n):
            limit = (i>0) + (i<m-1) + (j>0) + (j<n-1)
            if arr[i][j] > limit:
                flag = 1
                break
            arr[i][j] = limit
    if flag:
        print('NO')
    else:
        print('YES')
        for index in range(0, m):
            print(*arr[index])
        
    