for i in range(0, int(input())):
    a, k = input().split()
    k = int(k)
    while k > 1 and '0' not in a:
        a = str(int(a)+int(min(a))*int(max(a)))
        k -= 1
    print(a)
'''
2
4 5
6 4

'''