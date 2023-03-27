#include <iostream>
using namespace std;

int pai[1123456], peso[1123456], n, k, b1, b2;
char caso;

int acha(int x){
    if(pai[x]==x) return x;
    else return pai[x]=acha(pai[x]);
}

void fusao(int x, int y){

    x=acha(pai[x]);
    y=acha(pai[y]);

    if(x==y) return;

    if(peso[x]>peso[y]){
        pai[y]=x;
    }
    else if(peso[x]<peso[y]){
        pai[x]=y;
    }
    else{
        pai[x]=y;
        peso[y]++;
    }
}


int main(){
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        pai[i]=i;
        peso[i]=0;
    }
    while(k--){
        cin>>caso>>b1>>b2;
        if(caso=='F'){
            fusao(b1, b2);
        }
        else{
            if(acha(b1)==acha(b2)) cout<<"S"<<endl;
            else cout<<"N"<<endl;
        }
    }
}
