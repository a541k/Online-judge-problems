import string
n = int(input());
s = '.'.join(input() for _ in range(n))
a = string.ascii_lowercase
for i in a:
    if i not in s:
        print(i);exit()
for i in a:
    for j in a:
        if i+j not in s:
            print(i+j);exit()
