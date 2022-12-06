pw = input()

a=[]
n=['0','1','2','3','4','5','6','7','8','9']
q=['!','@','#','$','%','^','&','*','(',')','_','+','|','~','-','=','\\','/']

for i in pw:
    a.append(i)

if len(pw)<=20:
    if not pw.islower() and not pw.isupper():
        for j in a:
            for k in n:
                if j==k:
                    for m in a:
                        for o in q:
                            if m==o:
                                print("Valid")
                                exit()
                    print("Invalid")
                    exit()
        print("Invalid")
        exit()
    else:
        print("Invalid")
else:
    print("Invalid")