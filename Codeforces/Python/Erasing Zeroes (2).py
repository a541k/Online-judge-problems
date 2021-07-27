input()
s = input()
ans = ''
for i in range(s.count('n')): ans += '1 '
for i in range(s.count('r')): ans += '0 '
print(ans.strip())



#input()
#s = input()
#print('1 '*s.count('n')+'0 '*s.count('z'))