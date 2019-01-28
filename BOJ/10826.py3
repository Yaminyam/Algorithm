pibo = []
pibo.append(0)
pibo.append(1)
for i in range(2,10001):
	pibo.append(pibo[i-1]+pibo[i-2])
a = int(input())
print(pibo[a])