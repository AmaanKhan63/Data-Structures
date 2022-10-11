for _ in range(int(input())):
    n = int(input())
    i,x=1,3
    out = False
    if(n%2==1 and n>=3):
        out = True
    else:
        while(n>4):
            if((n//2)%2==1):
                out=True
            n = n/2
    if out:
        print("YES")
    else:
        print('NO')

