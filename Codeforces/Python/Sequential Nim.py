f= lambda:map(int, input().split())
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    f= s = 0
    count = 0
    for i in a:
        if i>1: break;
        else: count += 1
    if count %2 == 1 and count != len(a): print('Second')
    elif count %2 == 0 and count!=len(a):print('First')
    elif count%2 == 1 and count== len(a): print('First')
    elif count%2 == 0 and count== len(a): print('Second')
        
    
            