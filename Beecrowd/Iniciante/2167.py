N = int(input())
l = [int(i) for i in input().split()]
k = l[0]
for i in range(1,len(l)):
    if(k<=l[i]):
        k=l[i]
    else:
        print(i+1)
        exit()
print(0)
