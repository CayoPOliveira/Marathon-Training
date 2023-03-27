#include <iostream>

using namespace std;

struct cria{
    string nome;
    int ficha;
    bool pres;
};

int main(){
    while(1){
        int n;
        cin>>n;
        if(!n) break;
        struct cria vet[n+1];
        for(int i=1; i<=n; i++){
            cin>>vet[i].nome>>vet[i].ficha;
            vet[i].pres=true;
        }
        int cont=n;
        int i=1;
        while(cont!=1){
            int k=vet[i].ficha;
            if(k%2!=0){
                while(k>0){
                    i++;
                    if(i>n) i=1;
                    if(vet[i].pres){
                        k--;
                    }
                }
                //cout<<vet[i].nome<<" ";
                cont--;
                vet[i].pres=false;
            }
            else{
                while(k>0){
                    i--;
                    if(i<1) i=n;
                    if(vet[i].pres){
                        k--;
                    }
                }
                //cout<<vet[i].nome<<" ";
                cont--;
                vet[i].pres=false;
            }
        }
        for(i=1; i<=n; i++){
            if(vet[i].pres) break;
        }
        cout<<"Vencedor(a): "<<vet[i].nome<<endl;
    }
}
