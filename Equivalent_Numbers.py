import math
def ispow(a,c):
    while(a!=1):
        if a%c==0:
            a = a/c
        else:
            return False
    return True
for _ in range(int(input())):
    a,b  = map(int,input().split())
    lcd = 0
    out = 0
    if ispow(a,b)==True or ispow(b,a)==True:
        print('YES')
        continue
    for i in range(2,int(min(a,b)**0.5)+1):
        if a%i==0 and b%i==0:
            if ispow(a,i)==True and ispow(b,i)==True:
                out = 1
                break
    if out ==1:
        print('YES')
    elif out==0:print('NO')