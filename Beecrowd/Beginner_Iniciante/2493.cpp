#include <algorithm>
#include <iostream>

using namespace std;

void NotaEsquecida3055()
{
    int A, M;
    cin>>A>>M;
    M=M*2;
    cout<<M-A<<endl;
}
void EvitandoChuva2813()
{
    int A, GC=0, GT=0, AC=0, AT=0;
    string Ino, Vino;
    cin>>A;
    for(int i=0; i<A; i++){
        cin>>Ino>>Vino;
        if(Ino[0]=='c'){
            if(AC==0){
                GC++;
                AC++;
            }
            AT++;
            AC--;
        }
        if(Vino[0]=='c'){
            if(AT==0){
                GT++;
                AT++;
            }
            AC++;
            AT--;
        }
    }
    cout<<GC<<" "<<GT<<endl;
}
void LinkBolado2651(){
    string carta;
    int flag=1;
    getline(cin, carta);
    for(int i=0; i<carta.size()-4; i++){
        if(carta[i]=='z' or carta[i]=='Z')
            if(carta[i+1]=='e' or carta[i+1]=='E')
                if(carta[i+2]=='l' or carta[i+2]=='L')
                    if(carta[i+3]=='d' or carta[i+3]=='D')
                        if(carta[i+4]=='a' or carta[i+4]=='A')
                            flag=0;
    }
    if(flag==1) cout<<"Link Tranquilo"<<endl;
    else cout<<"Link Bolado"<<endl;
}
void UmilBolt2863()
{
    int T;
    double menor, a;
    cin>>T;
    while(!cin.eof())
    {
        menor=12.0;
        for(int i=0; i<T; i++){
            cin>>a;
            if(a<menor and a>=9.00) menor = a;
        }
        cout.precision(2);
        cout.setf(ios::fixed);
        cout<<menor<<endl;
        cin>>T;
    }
}
struct jogadores{
    string nome;
    int ind;
    char op;
    int flag;
};
struct operacao{
    int ind;
    int a, b, c;
    char igual;
    int flag;
};
bool org(struct jogadores a, struct jogadores b){
    return a.nome<b.nome;
}
void JogoDoOperador2493(){
    int T, indice, errados=0;
    cin>>T;
    while(!cin.eof()){
        errados=0;
        struct jogadores jog[T];
        struct operacao oper[T];
        for(int i=0; i<T; i++){
            oper[i].ind=i+1;
            cin>>oper[i].a>>oper[i].b>>oper[i].igual>>oper[i].c;
        }
        for(int i=0; i<T; i++){
            cin>>jog[i].nome>>jog[i].ind>>jog[i].op;
        }
        for(int i=0; i<T; i++){
            indice=jog[i].ind -1;
            if(jog[i].op=='+'){
                if(oper[indice].a+oper[indice].b==oper[indice].c) jog[i].flag=1;
                else jog[i].flag=0;
            }
            if(jog[i].op=='-'){
                if(oper[indice].a-oper[indice].b==oper[indice].c) jog[i].flag=1;
                else jog[i].flag=0;
            }
            if(jog[i].op=='*'){
                if(oper[indice].a*oper[indice].b==oper[indice].c) jog[i].flag=1;
                else jog[i].flag=0;
            }
            if(jog[i].op=='I'){
                if(oper[indice].a+oper[indice].b==oper[indice].c) oper[i].flag=1;
                else if(oper[indice].a-oper[indice].b==oper[indice].c) oper[i].flag=1;
                else if(oper[indice].a*oper[indice].b==oper[indice].c) oper[i].flag=1;
                else oper[i].flag=0;
                if(oper[i].flag==1) jog[i].flag=0;
                else jog[i].flag=1;
            }
        }
        for(int i=0; i<T; i++){
            if(jog[i].flag==0) {
                errados++;
            }
        }
        sort(jog, jog+T, org);
        if(errados!=T and errados!=0)
            for(int i=0, f=0; i<T; i++){
                if(jog[i].flag==0){
                    if(f!=0){
                       cout<<" ";
                    }
                    cout<<jog[i].nome;
                    f++;
                }
            }
        if(errados==0) cout<<"You Shall All Pass!";
        if(errados==T) cout<<"None Shall Pass!";
        cout<<endl;
        cin>>T;
    }
}

int main(){
    JogoDoOperador2493();
}