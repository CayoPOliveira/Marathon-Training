nome = input()
atual = input()
nasc = input()

d,m,a = atual.split("/")
dn,mn,an = nasc.split("/")

idade = int(a) - int(an)

if d==dn and m == mn:
    print(f"Feliz aniversario!\nVoce tem {idade} anos {nome}.")

else:
    if(int(mn)>int(m) or (int(m)==int(mn) and int(dn) > int(d))):
        idade -= 1
    print(f"Voce tem {idade} anos {nome}.")

