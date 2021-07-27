for _ in range(int(input())):
    n = int(input())
    if n==1: print(0)
    elif n%2 == 1: print(n//2)
    else: print(int(n/2-1))