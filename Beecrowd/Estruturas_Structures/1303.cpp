#include <iostream>
#include <algorithm>
using namespace std;

struct time{
    int ind;
    int pontos;
    int marcadas;
    int recebidas;
    double score;

    void average()
    {
        if(recebidas!=0) score = ((double) marcadas)/recebidas;
        else score = (double)marcadas;
    }
};
bool classifica(struct time a, struct time b){
        if(a.pontos!=b.pontos) return a.pontos>b.pontos;
        if(a.score!=b.score) return a.score>b.score;
        if(a.marcadas!=b.marcadas) return a.marcadas>b.marcadas;
        return a.ind<b.ind;
    }

int main(){
    int instancia = 1;
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        struct time vet[n];

        for(int i=0; i<n; i++){
            vet[i].pontos=0;
            vet[i].marcadas=0;
            vet[i].recebidas=0;
            vet[i].ind = i+1;
        }

        int partidas = (n*(n-1))/2;
        for(int i=0; i<partidas; i++){
            int x, px, y, py;
            cin>>x>>px>>y>>py;

            vet[x-1].marcadas+=px;
            vet[y-1].marcadas+=py;

            vet[x-1].recebidas+=py;
            vet[y-1].recebidas+=px;

            vet[x-1].pontos++;
            vet[y-1].pontos++;
            if(px>py) vet[x-1].pontos++;
            else vet[y-1].pontos++;

        }
        for(int i=0; i<n; i++){
            vet[i].average();
        }
        sort(vet, vet+n, classifica);
        if(instancia!=1) cout<<endl;
        cout<<"Instancia "<<instancia++<<endl;
        for(int i=0; i<n; i++){
            if(i!=0) cout<<" ";
            cout << vet[i].ind;
        }
        cout<<endl;
    }
}
