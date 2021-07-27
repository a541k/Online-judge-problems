#n, m = map(int, input().split())
#a = list(); b = list(); ans = list()
#for i in range(m):
#    t1, t2 = input().split()
#    a.append(t1); b.append(t2)
#for word in input().split():
#    index = [i for i, string in enumerate(a) if string == word]
#    ans.append(a[index[-1]] if len(a[index[-1]]) <= len(b[index[-1]]) else b[index[-1]])
#print(*ans)


#using dictionary
n,m = map(int,input().split())
d = dict(input().split() for i in range(m))
print(' '.join(min((w, d[w]), key=len)for w in input().split()))


#4 3
#codeforces codesecrof
#contest round
#letter message
#codeforces contest letter contest