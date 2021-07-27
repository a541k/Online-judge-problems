for _ in range(int(input())):
    n, x = map(int, input().split())
    a = list(sorted(map(int, input().split()), reverse= True))
    team = count = 0
    for i in range(n):
        count+=1
        if count*a[i] >= x:
            team += 1
            count = 0
    print(team)
      