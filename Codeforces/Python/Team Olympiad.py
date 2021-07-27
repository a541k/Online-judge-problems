n = int(input())
s = list(input().split())
teams = min(s.count('1'), s.count('2'), s.count('3')); a = list()
print(teams)
for i in range(teams):
    a.append(s.index('1'));a.append(s.index('2'));a.append(s.index('3'))
    print(a[-1]+1,a[-2]+1,a[-3]+1)
    s[a[-1]]=s[a[-2]]=s[a[-3]]='0'