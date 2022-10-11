for _ in range(int(input())):
    n = int(input())
    s = input()
    temp = s
    if s=='10':
        print('10')
    else: print(''.join(sorted(s)))