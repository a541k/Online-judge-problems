#for _ in range(int(input())):
#    can_be_swapped = 'YES'
#    a = input();b = input();c = input()
#    for i in range(len(a)):
#        if c[i] is not b[i] and c[i] is not a[i]:
#            can_be_swapped = 'NO'
#            break
#    print(can_be_swapped)
    #print('YES' if can_be_swapped is True else 'NO')
    
for _ in range(int(input())):
    print('YES' if all(c is b or c is a for a,b,c in zip(input(),input(),input())) else 'NO')