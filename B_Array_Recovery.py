for _ in range(int(input())):
    n = int(input())
    d  = list(map(int,input().split()))
    out = 0
    for i in range(1,n):
        if d[i]==0:
            d[i] = d[i-1]
            continue
        if d[i]<=d[i-1]:
            out =-1
            break
        else :d[i] += d[i-1]
    if out ==0: 
        for i in range(n):
            print(d[i],end=' ')
        print()
    else:print(-1)