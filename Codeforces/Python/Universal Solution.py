for _ in range(int(input())):
    s = input()
    l = len(s)
    r = s.count('R')
    si = s.count('S')
    p = s.count('P')
    if r>=si and r>=p:
        print('P'*l)
    elif si>=r and si>=p:
        print('R'*l)
    elif p>=si and p>=r:
        print('S'*l)
    