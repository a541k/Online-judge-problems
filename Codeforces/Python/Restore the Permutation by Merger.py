f = lambda: map(int, input().split())
for _ in range(int(input())):
    n = int(input())
    p = list(f())
    s = list()
    for i in p:
        if i not in s:
            s.append(i)
    print(*s)