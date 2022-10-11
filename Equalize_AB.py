for _ in range(int(input())):
    a,b,x  = map(int,input().split())
    if x==1:
        print('YES')
    elif abs(a-b)%(2*x)==0:
        print('YES')
    elif a == b:
        print('YES')
    else:
        print('NO')