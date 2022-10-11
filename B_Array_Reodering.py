import math
for _ in range(int(input())):
    n = int(input())
    a  = list(map(int,input().split()))
    e,o = list(),list()
    out = 0
    for i in range(n):
        if a[i]%2 ==0:
            e.append(a[i])
        else:
            o.append(a[i])
    a = e+o
    for i in range(n):
        for j in range(i+1,n):
            if math.gcd(a[i],2*a[j])>1:
                # print(a[i],a[j],i,j)
                out+=1
    print(out)
'''
GCD
GCDpair
'''