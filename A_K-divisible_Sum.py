for _ in range(int(input())):
    n,k  = map(int,input().split())
    max = 1
    if k==1:
        print(1)
        continue
    while n>k:
        k +=k
    for i in range(1,k+1):
        if (n*i)>=k:
            print(max)
            break
        else:
            max +=1
            