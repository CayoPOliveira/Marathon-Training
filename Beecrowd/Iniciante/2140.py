while(1):
    N,M = input().split(" ")
    N = int(N)
    M=int(M)
    if(not N and not M): break

    notas = [2, 5, 10, 20, 50, 100]
    troco = M-N

    i=5
    while(notas[i] > troco and i>-1):
        i-=1

    troco -= notas[i]

    while(notas[i] > troco and i>-1):
        i-=1

    troco -= notas[i] 

    if troco==0: print("possible")
    else: print("impossible")

