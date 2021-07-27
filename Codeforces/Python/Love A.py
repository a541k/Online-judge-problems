s = input()
a = s.count('a'); nota = len(s) - a
print(a + nota*(nota<a) + (a-1)*(nota>=a))