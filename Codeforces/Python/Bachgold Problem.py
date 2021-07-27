n = int(input())
a = [2] * (n//2 -1)
if n%2: a.append(3) 
else: a.append(2)
print(len(a)); print(*a)

#n=int(input());print(n//2,"\n","2 "*(n//2-1),2+n%2)