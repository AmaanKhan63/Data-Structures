for _ in range(int(input())):
    n = int(input())
    a  = list(map(int,input().split()))
    freq1,freq2,max1,max2 = 0,0,0,0
    for i in range(n):
        for j in range(i,n,2):
            tempfreq =0
            if a[i]==a[j]:
                tempfreq+=1
            if tempfreq>freq1:
                fr