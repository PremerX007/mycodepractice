datack = int(input())
datain = int(input())
li = []

for i in range(datain):
    d = input().split()
    li.append(d)

for j in li:
    j[0] = int(j[0])
    j[1] = int(j[1])
    for l in range(j[0],j[1]+1):
        if(datack==l):
            print(j[2])
            exit
