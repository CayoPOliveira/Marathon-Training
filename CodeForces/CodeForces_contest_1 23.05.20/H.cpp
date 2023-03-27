#include<iostream>
#include <algorithm>

using namespace std;

struct curso{
    int tempo;
    int valor;
};

bool organiza(struct curso a, struct curso b){
    if(a.tempo!=b.tempo) return a.tempo<b.tempo;
    if(a.valor!=b.valor) return a.valor>b.valor;
}

int main(){
    int n, tempo;
    cin>>n>>tempo;
    struct curso vet[n];
    for(int i=0; i<n; i++){
        cin>>vet[i].tempo>>vet[i].valor;
    }
    sort(vet, vet+n, organiza);
    int td=0;
    int cont=0;
    for(int i=0; i<n; i++){
        if(td<vet[i].tempo){
            cont+=vet[i].valor;
            td++;
            if(td>tempo) break;
        }
    }
    cout<<cont<<endl;
}
