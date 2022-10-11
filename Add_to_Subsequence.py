for _ in range(int(input())):
    n = int(input())
    a  = list(map(int,input().split()))
    out = 0
    X = set(a)
    for i in range(len(X)):
        if a.count(a[i])==1:
            continue
        if a.count(a[i])==2:
            out+=1
        elif a.count(a[i])==3:
            out+=2
        elif a.count(a[i]) ==4:
            out+=3
        else:
            out+=a.count(a[i])
    print(out)