a=[]

while True:
    num = int(input())
    if(num==0):
        bl = input()
        if bl.lower() == 'max':
            a.sort(reverse=True)
            print(*a) # (*) << Print integer from list 
        elif bl.lower() == 'min':
            a.sort()
            print(*a)
        else:
            print("error")
        break
    a.append(num)