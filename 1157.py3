a = input()
a = a.upper()
count = [a.count(chr(i)) for i in range(65 ,91)]
maxnum=0
maxindex=0
for i in count:
    if(i > maxnum):
        maxnum = i
        maxindex = count.index(i)
    elif(i == maxnum):
        maxindex = -2
print(chr(maxindex + 65))
        
