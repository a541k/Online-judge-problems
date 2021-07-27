f = lambda: map(int, input().split())
for _ in range(int(input())):
    x,y,z = f()
    if x==y and x>z: print("YES"); print(z,z,x)
    elif y==z and y>x: print("YES");print(z,x,x)
    elif x==z and x>y: print("YES");print(z,y,y)
    elif y==z and y==x: print("YES");print(z,x,x)
    else : print('NO')
    
        