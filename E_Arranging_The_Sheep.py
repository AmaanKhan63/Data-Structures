for _ in range(int(input())):
    n = int(input())
    a  = list(input().split())
    f = a.count('*')
    fmax=0
    for i in range(n):
        if a[i:i+f].count('*')>fmax:
            fmax = a[i:i+f].count('*')
            