#for _ in range(int(input())):
#    a,b,c = map(float, input().split())
#    if a>=c :first =-1
#    else : first = 1
#    if c/b >= a: second = -1
#    else : second = b
#    print('{} {}'.format(int(first),int(second)))

 
for _ in range(int(input())):
	a, b, c = map(int, input().split())
	print(1 if a < c else -1, b if c < a * b else -1)