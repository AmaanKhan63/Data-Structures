def solve(n,k,s):
    if k ==1:
        print('Yes')
        return
    if k>2:
        dif = s[k-1]-s[k-2]
        for i in range(k-2,0,-1):
            if s[i]-s[i-1]>dif:
                print('No')
                return
            dif = s[i]- s[i-1]
    if s[0]<s[1]-s[0]:
        print('Yes')
        return
    comp = s[0]//(n-k+1)
    if s[0]%(n-k+1)!=0:
        comp+=1
    if comp>s[1]-s[0]:
        print('No')
        return
    print('Yes')

for _ in range(int(input())):
    n,k  =map(int,input().split())
    s  = list(map(int,input().split()))
    solve(n,k,s)
