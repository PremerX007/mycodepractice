# Ref form https://th.wikipedia.org/wiki/%E0%B8%AB%E0%B8%A1%E0%B8%B2%E0%B8%81%E0%B8%A3%E0%B8%B8%E0%B8%81%E0%B8%AA%E0%B8%B2%E0%B8%81%E0%B8%A5

index_file = ['a','b','c','d','e','f','g','h']
# matrix = [[0,0,0,0,0,0,0]]
def king(x,y,x1,y1):
    if x1 == x-1 or x1 == x+1:
        if y1 == y+1 or y1 == y-1:
            return True
        else:
            return False
    else:
        return False

def rook(x,y,x1,y1):
    bl = False
    if (x1 > x or x1 < x) and y1 == y:
        bl = True
    else:
        bl = False

    if (y1 > y or y1 < y) and x1 == x:
        bl = True
    else:
        bl = False

    return bl

def queen(x,y,x1,y1):
    

name = input()
data = [input().split() for i in range(2)]

for i in data:
    for ck in index_file:
        if i[0]==ck:
            data[data.index(i)][0] = index_file.index(ck)
    data[data.index(i)][1] = int(i[1])
    
print(data)