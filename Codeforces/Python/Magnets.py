groups = 0
s = ''
for _ in range(int(input())):
    inp = input()
    if s != inp:
        s = inp
        groups += 1
print(groups)