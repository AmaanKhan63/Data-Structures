for _ in range(int(input())):
    n = int(input())
    a  = list(map(int,input().split()))
    eve,odd = 0,0
    for i in range(n):
        if a[i]%2 == 0:
            eve+=1
        else:
            odd+=1
    # if eve%2 ==0 and odd%2 ==0:
    #     print('Bob')
    # else:
    for i in range(1,odd//2):
        print(odd%3)
        if odd%(4*i)==0 or odd%(4*i-1)==0:
            print('Alice')
            break
    print('bob')
        
    

