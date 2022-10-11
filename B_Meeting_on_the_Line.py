for _ in range(int(input())):
    n = int(input())
    x  = list(map(int,input().split()))
    t  = list(map(int,input().split()))
    m = [0 for i in range(n)]
    min = 10000000000000
    for i in range(n):
        for j in range(n):
            time = t[i]+t[j]+ abs(x[i]-x[j])
            if time<min:
                min = time
                idx = i
    print(i)
        