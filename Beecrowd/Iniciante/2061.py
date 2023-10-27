n, m = [int(i) for i in input().split()]

for i in range(m):
        str = input()
        if str == "fechou":
                n+=1
        else: 
                n-=1
print(n)
