f = lambda: map(int, input().split())
for _ in range(int(input())):
    n, m = f()
    count = 0
    s = list()
    for i in range(n):
        temp = input(); s.append(temp)
    for i in range(n):
        if i != n-1:
            if s[i][m-1] == 'R': count+=1
        else:
            count += s[i].count('D')
    print(count)
