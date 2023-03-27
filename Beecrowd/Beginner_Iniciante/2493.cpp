#include <algorithm>
#include <iostream>

using namespace std;

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
int main(){
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
