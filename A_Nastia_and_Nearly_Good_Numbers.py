for _ in range(int(input())):
    a,b  = map(int,input().split())
    out = ''
    x,y,z=0,0,0
    if  b==1:
        print('NO')
    else:
        print('YES')
        x = a*b
        y =(a*b)-a
        z =(2*a*b)-a
        if x>0 and y>0 and z>0:
            print(x,y,z)
        else:
            x = 2*a*b
            y =(2*a*b)-a
            z =(4*a*b)-a
            print(x,y,z)