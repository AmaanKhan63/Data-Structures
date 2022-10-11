for _ in range(int(input())):
    s = input()
    s = sorted(s)
    out=''
    zerc = s.count('0')
    ninc = s.count('9')
    s = [value for value in s if value != '0']
    s = [value for value in s if value != '9']
    if len(s)==0:
        out += zerc*'0' + ninc*'9'
    else:
        first = s.count(s[0])
        out = zerc*'0'+ first*s[0]
        s = [value for value in s if value != s[0]]
        for i in range(first,s.rfind('s[0]')):
            out+= str(min(9,int(s[i])+1))
        out += ninc*'9'
    print(out)