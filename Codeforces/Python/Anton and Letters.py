#import re
#s = input()
#l = re.findall('[a-z]', s)
#print(len(set(l)))

import re
print(len(set(re.findall('[a-z]', input()))))