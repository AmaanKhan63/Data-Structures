for _ in range(int(input())):
    n,m  = map(int,input().split())
    if max(m,n)>=3 and min(m,n)>1:
        print(2,2)
    elif n==1 or m==1:
        print(1,1)
    elif n==2 or n==2:
        print(n,m//2)

    