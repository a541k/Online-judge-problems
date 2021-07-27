#import re
#for _ in range(int(input())):
#    count = 0
#    s = input()
#    l = re.findall('(?=(10+1))',s)
#    for i in l: count += len(i)-2
#    print(count)


for _ in range(int(input())): print(input().strip('0').count('0'))