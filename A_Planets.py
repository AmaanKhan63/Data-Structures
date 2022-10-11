for _ in range(int(input())):
    n,c  = map(int,input().split())
    a  = list(map(int,input().split()))
    cost = 0
    while len(a)>0:
        #print(a[0])
        if a.count(a[0])>c:
            temp = a[0]
            cost+=c
            a = [value for value in a if value != temp]
        else:
            temp = a[0]
            cost += a.count(a[0])
            a = [value for value in a if value != temp]
    print(cost)