for _ in range(int(input())):
    input();s = input()
    print('NO' if s.find('8')==-1 or len(s[s.find('8'):])<11 else 'YES')
    