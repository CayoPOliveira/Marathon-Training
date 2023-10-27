str = input()
yes = list()
no = list()
while(str!="FIM"):
    n, op = str.split(" ")
    if op == "YES":
        yes.append(n)
    else:
        no.append(n)
    str = input()

unicos = {i:True for i in yes}
maxNome = max([len(n) for n in yes])
maiores = [x for x in yes if len(x) == maxNome]

if(len(maiores)==1):
    ganhador = maiores[0]
    yes.sort()
    no.sort()
    for i in yes:
        if unicos[i]:
            unicos[i]=False
            print(i)
    for i in no:
        print(i)
    print(f"\nAmigo do Habay:\n{ganhador}")
else:
    ganhador = maiores[0]
    for i in yes:
        if i in maiores:
            ganhador = i
            break
    yes.sort()
    no.sort()
    for i in yes:
        if unicos[i]:
            unicos[i]=False
            print(i)
    for i in no:
        print(i)
    print(f"\nAmigo do Habay:\n{ganhador}")
