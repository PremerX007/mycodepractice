num = input()

def aaa(nm): #sum of line number to 1 digits
    op = str(nm)
    a=[]
    re=0
    for i in op:
        a.append(i)

    temp = [eval(i) for i in a]
    for i in temp:
        re=re+i
    if len(str(re))==1:
        return print(re)
    else:
        aaa(re)

if __name__ == '__main__':
    aaa(num)

