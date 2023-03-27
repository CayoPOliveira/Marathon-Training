#include <iostream>

using namespace std;

int guild[112345], peso[112345], qtd[112345];

int acha(int x){
    if(guild[x]==x) return x;
    else return guild[x] = acha(guild[x]);
}


void uniao(int x, int y){

    x=acha(guild[x]);
    y=acha(guild[y]);

    if(x==y) return;

    if(peso[x]<peso[y]){
        guild[x]=y;
        qtd[y]+=qtd[x];
    }
    else if(peso[x]>peso[y]){
        guild[y]=x;
        qtd[x]+=qtd[y];
    }
    else{
        guild[x]=y;
        peso[y]++;
        qtd[y]+=qtd[x];
    }
}


int main(){
    int n, m;
    while(1){
        cin>>n>>m;
        if(!n and !m) break;
        int cont=0;
        for(int i=1; i<=n; i++){
            guild[i]=i;
            peso[i]=0;
            cin>>qtd[i];
        }
        while(m--){
            int a, b, q;
            cin>>q>>a>>b;
            if(q==1){
                uniao(a, b);
            }
            else{
                int rafa=acha(1), g1=acha(a), g2=acha(b);
                if(rafa==g1){
                    if(qtd[rafa]>qtd[g2]) cont++;
                }
                else if(rafa==g2){
                    if(qtd[rafa]>qtd[g1]) cont++;
                }
            }
        }
        cout<<cont<<endl;
    }
}
