#map(int, input().split())
#import numpy as np
for t in range(int(input())):
    
    n,m = map(int, input().split())
    
    row = [0]*n
    col = [0]*m
    
    for i in range(n):
        row_in = list(map(int, input().split()))
        for j in range(m):
            if row_in[j] == 1:
        	    col[j] = 1
                
        if 1 in row_in: row[i] = 1
        
    claimable = min(row.count(0), col.count(0))
    print('Ashish' if claimable % 2 == 1 else 'Vivek')