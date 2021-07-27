input()
s = input()
ans = ''
for i in range(s.count('n')): ans += '1 '
for i in range(s.count('r')): ans += '0 '
print(ans.strip())
