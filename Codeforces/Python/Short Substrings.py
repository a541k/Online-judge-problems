#for t in range(int(input())):
#    sub = input()
#    string = ''
#    string += sub[0]
#    for i in range(int(len(sub)/2)):
#        string += sub[i*2 + 1]
#    print(string)

for t in range(int(input())):
    sub = input()
    print(sub[0::2]+sub[-1])