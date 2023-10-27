d,n = input().split(" ")
while(d!='0' and n!='0'):
    i=0
    while(i<len(n)):
        if(n[i]==d[0]):
            n = n[:i]+n[i+1:]
            i-=1
        i+=1
    while(len(n)>1 and n[0]=='0'):
        n=n[1:]
    if(len(n)==0):
        n='0'
    print(n)
    d,n = input().split(" ")
