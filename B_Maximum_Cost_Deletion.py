for t in range(int(input())):
    n,a,b = map(int,input().split()) 
    s = input()
    l = len(s)
    out,grp = 0,1 
    i=0
    if b>=0:
        print(a*l+b*l)
        continue
    else:
        if s.count('1')>s.count('0'):
            while i<len(s):
                if s[i]=='0':
                    for k in range(1,len(s)-i-1):
                        if s[i+k] == '0':
                            continue
                        else:
                            grp+=1
                            i = i+k
                            break
                else:
                    i+=1
        else:
            while i<len(s):
                if s[i]=='1':
                    for k in range(1,len(s)-i-1):
                        if s[i+k] == '1':
                            continue
                        else:
                            grp+=1
                            i = i+k
                            print(i)
                            break
                else:
                    i+=1
    print(a*l+b*grp)