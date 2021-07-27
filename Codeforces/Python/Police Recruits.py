input();s = list(map(int, input().split()))
p= u =0
for i in s:
    if i ==-1:
        if p: p-=1
        else: u += 1
    else: p += i
print(u)