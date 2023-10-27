#include<iostream>
#include<algorithm>

using namespace std;

struct rena{
    string nome;
    double altura;
    int peso;
    int idade;
};

bool org(struct rena a, struct rena b){
    if(a.peso!=b.peso) return a.peso>b.peso;
    if(a.idade!=b.idade) return a.idade<b.idade;
    if(a.altura!=b.altura) return a.altura<b.altura;
    return a.nome<b.nome;
}

int main(){
    int x, cenario=1;
    cin>>x;
    while(x--){
        int a, b;
        cin>>a>>b;
        struct rena vet[a];
        for(int i=0; i<a; i++){
            cin>>vet[i].nome>>vet[i].peso>>vet[i].idade>>vet[i].altura;
        }
        sort(vet, vet+a, org);
        cout<<"CENARIO {"<<cenario<<"}"<<endl;
        cenario++;
        for(int i=0; i<b; i++){
            //if(i!=0) cout<<endl;
            cout<<i+1<<" - "<<vet[i].nome<<endl;
        }
    }
}

