import math
from re import M
for _ in range(int(input())):
    n,m  = map(int,input().split())
    gcd = math.gcd(n,m)
    a = min(n,m)
    b = max(n,m)
    if  a==b:
        print(0,0)
    elif b-a>gcd:
        gcd = b-a
        rem = a%gcd
        if rem>gcd//2:
            print(gcd,gcd-rem)
        else:
            print(gcd,rem)
    else:
        print(gcd,0)

    