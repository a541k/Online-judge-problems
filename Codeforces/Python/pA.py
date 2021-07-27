f = lambda: map(int, input().split())
for _ in range(int(input())):
    n = int(input())
    l = list(range(1,n+1))
    print(*l)