N = int(input())

v=[]
for i in range(N):
    k = int(input())
    v.append( k )

v.sort()

par = [_ for _ in v if _%2==0 ]
impar = [_ for _ in v if _%2!=0 ]
for i in par:
    print(i)
for i in reversed(impar):
    print(i)



