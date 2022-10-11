for _ in range(int(input())):
    n = int(input())
    a =  list(map(int,input().split()))
    eve,odd = 0,0
    for i in range(n):
        if a[i]%2==1:
            odd+=1
        elif a[i]%2==0:
            eve+=1
    if eve==0 or odd ==0:
        print(0)
    else:
        print(eve)

