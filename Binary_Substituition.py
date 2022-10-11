def ans (s,z):
    if z==len(s):
        return 0
    else:
        a=ans(s,z+1)+   
        b=0
        i=0
        if z<len(s)-1:
            if s[z]!=s[z+1]:
                i=2
            else:
                i=1
            b=ans(s,z+2)+i
        print(a,b,s[z],z)
        return ((a+b)%998244353)
for _ in range (int(input())):
    s=input()
    s = set(s)
    s = list(s)
    s = ''.join(s)
    print(ans(s,0)//len(s))