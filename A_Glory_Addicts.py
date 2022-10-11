for _ in range(int(input())):
    n = int(input())
    a  = list(map(int,input().split()))
    b  = list(map(int,input().split()))
    fir = []
    fros = []
    firn,frosn = 0,0
    for i in range(n):
        if a[i]==0:
            firn+=1
        else: frosn+=1
    out = 0
    for i in range(n):
        if a[i]==0:
            fir.append(b[i])
        elif a[i]==1:
            fros.append(b[i])
    fir = sorted(fir)
    fros = sorted(fros)
    firsum = sum(fir)
    frossum = sum(fros)
    if frosn>firn:
        out += firsum*2
        out+= frossum*2 - sum(fros[0:(frosn-firn)])
    elif firn>frosn:
        out += frossum*2
        out+= firsum*2 - sum(fir[0:(firn-frosn)])
    else:
        if fir[0]>fros[0]:
            out += firsum*2
            out+= frossum*2 - fros[0]
        else:
            out += frossum*2
            out+= firsum*2 - fir[0]
    print(out)