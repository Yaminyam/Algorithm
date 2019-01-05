while(1):
    a = input("")
    n, m = map(int, a.split())
    if(n == 0 and m == 0):
        break
    if(n-m < m):
        m = n-m
    answer = 1
    for i in range(m):
        answer *= (n-i)
    for i in range(m):
        answer //= (i+1)
    print(int(answer))
