for _ in range(int(input())):
    a,b,x,y  = map(int,input().split())
    if a/x > b/y:
        print('Chefina')
    elif a/x < b/y:
        print('Chef')
    else:
        print('Both')
    