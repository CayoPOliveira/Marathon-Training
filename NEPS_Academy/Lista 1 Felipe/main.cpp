#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/**< Telefone (P1) */
void telefone(){
    string num;
    cin>>num;
    for(int i=0, k=num.size(); i<k; i++){
        if(num[i]=='-')
        {
            cout<<num[i];
            continue;
        }
        if(num[i]>='A' and num[i]<='C'){
            cout<<2;
            continue;
        }
        if(num[i]>='D' and num[i]<='F'){
            cout<<3;
            continue;
        }
        if(num[i]>='G' and num[i]<='I'){
            cout<<4;
            continue;
        }
        if(num[i]>='J' and num[i]<='L'){
            cout<<5;
            continue;
        }
        if(num[i]>='M' and num[i]<='O'){
            cout<<6;
            continue;
        }
        if(num[i]>='P' and num[i]<='S'){
            cout<<7;
            continue;
        }
        if(num[i]>='T' and num[i]<='V'){
            cout<<8;
            continue;
        }
        if(num[i]>='W' and num[i]<='Z'){
            cout<<9;
            continue;
        }
        cout<<num[i];
    }
    cout<<endl;
}

/**< Sedex Marciano */
void sedex(){
    int L, A, P, R, DiagBase, DiagCaixa;
    cin>>L>>A>>P>>R;
    DiagBase=sqrt(pow(L,2)+pow(A,2));
    DiagCaixa=sqrt(pow(DiagBase,2)+pow(P,2));
    if(DiagCaixa<=R*2) cout<<"S"<<endl;
    else cout<<"N"<<endl;
}

/**< Olimpíadas */
struct medalhas{
    int cod;
    int o, p, b;
};
bool maiorouro(medalhas a, medalhas b){
    if(a.o!=b.o) return a.o>b.o;
    if(a.o==b.o and a.p!=b.p) return a.p>b.p;
    if(a.o==b.o and a.p==b.p and a.b!=b.b) return a.b>b.b;
    if(a.o==b.o and a.p==b.p and a.b==b.b) return a.cod<b.cod;
    return 0;
}
void olimp(){
    int NPaises, NModalidades, o, p, b;
    cin>>NPaises>>NModalidades;
    struct medalhas vet[NPaises];
    for(int i=0; i<NPaises; i++){
        vet[i].o=vet[i].p=vet[i].b=0;
        vet[i].cod = i+1;
    }
    for(int i=0; i<NModalidades; i++){
        cin>>o>>p>>b;
        vet[o-1].o++;
        vet[p-1].p++;
        vet[b-1].b++;
    }
    sort(vet, vet+NPaises, maiorouro);
    for(int i=0; i<NPaises; i++){
        cout<<vet[i].cod<<" ";
    }
    cout<<endl;
}

/**< Mapa (OBI 2017) */
void mapa(){
    int L, C, i, j;
    int a, b, c, d;
    cin>>L>>C;
    string MapaDM[L];
    for(i=0; i<L; i++){
        cin>>MapaDM[i];
        for(j=0; j<C; j++){
            if(MapaDM[i][j]=='o'){
                a=i;
                b=j;
            }
        }
    }
    c=a;
    d=b;
    while(1){
        if(a>0)
            if(MapaDM[a-1][b]=='H' and c!=a-1){
                c=a;
                d=b;
                a--;
                continue;
            }
        if(b>0)
            if(MapaDM[a][b-1]=='H' and d!=b-1){
                d=b;
                c=a;
                b--;
                continue;
            }
        if(b<C-1)
            if(MapaDM[a][b+1]=='H' and b+1!=d){
                d=b;
                c=a;
                b++;
                continue;
            }
        if(a<L-1)
            if(MapaDM[a+1][b]=='H' and c!=a+1){
                c=a;
                d=b;
                a++;
                continue;
            }
        break;
    }
    cout<<a+1<<" "<<b+1<<endl;

}

/**< Cinco
OBI 2018 - Terceira Fase - Nivel 2 */
void cinco(){

}

/**< Língua do P
OBI 2014 - Primeira Fase - Nível 2 */
void linguap(){
    string c;
    char ant;
    int i=0, protecao;
    getline(cin, c);
    for(i=0; i<c.size(); i++){
        if(i!=0) if((c[i-1]=='p' and c[i]!='p') or (c[i-1]=='p' and c[i+1]=='p')){
            cout<<c[i];
            continue;
        }
        cout<<c[i];
    }
}

/**< Auto Estrada
OBI 2008 - Segunda Fase - Nivel Júnior */
void estrada(){
    int N, cont=0;
    char C;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>C;
        if(C=='P') cont+=2;
        if(C=='C') cont+=2;
        if(C=='A') cont++;
    }
    cout<<cont<<endl;
}

/**< INT MAIN */
int main()
{
    linguap();
    return 0;
}
