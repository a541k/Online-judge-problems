l, r = map(int, input().split())
for i in range(l, r+1):
	if len(str(i)) == len(set(str(i))):print(i);exit()
print(-1)