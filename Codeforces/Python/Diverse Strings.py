import string
a = string.ascii_lowercase
for _ in range(int(input())):
    s = ''.join(map(str, sorted(input())))
    print('YES' if s in a else 'NO')