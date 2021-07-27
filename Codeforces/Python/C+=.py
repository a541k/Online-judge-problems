for _ in range(int(input())):
    a,b,n = map(int, input().split())
    minn = min(a,b); maxx = max(a,b)
    ans, count = (0, 0)
    while n>=ans:
        ans = maxx + minn
        minn, maxx = (maxx, ans)
        #print(minn, maxx, ans)
        count+=1
    print(count)
        