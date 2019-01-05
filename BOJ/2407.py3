a = input("")
n, m = map(int, a.split())
answer = 1
for i in range(m):
    answer *= (n-i)
for i in range(m):
    answer //= (i+1)
print(int(answer))
