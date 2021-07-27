import re
for _ in range(int(input())):
    s = input()
    l = re.findall('[1-9]', s)
    ans = list()
    print(len(l)); 
    for digit in l:
        index = s.find(digit)
        s=s[:index]+'0'+s[index+1:] 
        ans.append(digit+'0'*(len(s)-1- index))
    print(*ans)
    
#for _ in range(int(input())):
#    n = input()
#    a = [int(x) * 10**i for i, x in enumerate(n[::-1]) if x != '0']
#    print(len(a))
#    print(*a)