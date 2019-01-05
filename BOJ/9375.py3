for a in range(int(input())):
    d, n = {}, int(input())
    sumnum = 1;
    for i in range(n):
        value, key = input().split()
        if key in d:
            d[key] += 1
        else:
            d[key] = 1

    for i in d.keys():
        sumnum *= d.get(i)+1
    print(sumnum-1)
