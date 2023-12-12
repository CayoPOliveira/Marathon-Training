vet = [1]
for i in range(1,16):
    vet.append(vet[-1]*i)
while(True):
    string = input().strip()
    if(string=='0'): break
    n = len(string)
    print(vet[n])