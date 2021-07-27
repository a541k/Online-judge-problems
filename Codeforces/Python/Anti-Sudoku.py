#for _ in range(int(input())):
#    a = [list(input().strip()) for index in range(9)]
#    a[0][0] =int((int(a[0][0])+1)%9 + (int(a[0][0])==8))
#    a[1][3] =int((int(a[1][3])+1)%9 + (int(a[1][3])==8))
#    a[2][6] =int((int(a[2][6])+1)%9+ (int(a[2][6])==8))
#    a[3][1] =int((int(a[3][1])+1)%9+ (int(a[3][1])==8))
#    a[4][4] =int((int(a[4][4])+1)%9+ (int(a[4][4])==8))
#    a[5][7] =int((int(a[5][7])+1)%9+ (int(a[5][7])==8))
#    a[6][2] =int((int(a[6][2])+1)%9+ (int(a[6][2])==8))
#    a[7][5] =int((int(a[7][5])+1)%9+ (int(a[7][5])==8))
#    a[8][8] =int((int(a[8][8])+1)%9+ (int(a[8][8])==8))
#    for i in range(9):
#        print(*a[i], sep = '')
#    
#    

for t in range(int(input())):
    for i in range(9):
        print(input().replace('1', '2'))