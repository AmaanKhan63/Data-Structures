for _ in range(int(input())):
    n,m,i,j =map(int,input().split())
    if(i>(n/2)):
        ark = 'top'
    else:
        ark = 'bottom'
    if(j>(m/2)):
        arkc = 'right'
    else:
        arkc = 'left'
    # print(arkc)
    # print(ark)
    if (arkc=='right' and ark == 'bottom'):
        print(1,1,n,m)
    elif (arkc=='left' and ark == 'bottom'):
        print(1,1,n,m)
    elif(arkc=='right' and ark == 'top'):
        print(1,1,n,m)
    elif(arkc=='left' and ark == 'top'):
        print(1,1,n,m)
