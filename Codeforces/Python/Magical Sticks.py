import math
for _ in range(int(input())):
    n = float(input())
    if n<3 : print(1)
    else : print(int(math.ceil(n/2)))