#must have period of 2
T = int(input())
for t in range(T):
    s = input()
    ans = len(s)
    for a in range(10):
        for b in range(10):
            reqd = [str(a), str(b)]
            cost = 0
            idx = 0
            for i in range(len(s)):
                if s[i] != reqd[idx]:
                    cost += 1
                else:
                    idx ^= 1
            if idx != 0 and a!=b:
                cost += 1
            ans = min(cost, ans)
            
    print(ans)