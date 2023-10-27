from math import ceil
n, m = input().split(" ")
n = int(n)
m = int(m)

m = n*m
lista = [ceil((m*i/100)) for i in range(10, 100, 10)]
for i in range(0, len(lista)):
        print(lista[i], end="")
        if(i==len(lista)-1):
                print()
        else: print(end=" ")
