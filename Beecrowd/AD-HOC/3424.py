N = int(input())
string = input()
i=0
resposta = 0
while(i<N-1):
    if(string[i] == string[i+1] and string[i]=='a'):
        count=2
        c = string[i]
        i+=2
        while(i < N and c == string[i]):
            count+=1
            i+=1
        
        resposta+=count
    i+=1
print(resposta)
