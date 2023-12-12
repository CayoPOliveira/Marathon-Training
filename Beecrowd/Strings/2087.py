while(True):
    N = int(input().strip())
    if(N == 0): break
    conjunto = [input().strip() for _ in range(N)]
    flag = True
    conjunto.sort()
    for i in range(len(conjunto)-1):
        a, b = conjunto[i], conjunto[i+1]
        if(len(b)<len(a)):
            a,b = b,a
        common = [a[i] for i in range(len(a)) if a[i]==b[i]]
        if len(common)==len(a):
            flag = False
            break
    if(flag):
        print("Conjunto Bom")
    else:
        print("Conjunto Ruim")
