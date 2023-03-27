#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int sentido=1;

struct jogador{
    vector< pair<int, int> > mao;
};

int converte(char a){
    if(a=='S') return 4;
    if(a=='H') return 3;
    if(a=='D') return 2;
    if(a=='C') return 1;
}
void sentido_horario(){
    sentido++;
}
void sentido_antihorario(int i){
    sentido--;
}

vector< pair<int, int> > baralho;

int main(){
    int a,c;
    char b;
    int P, M, N;
    cin>>P>>M>>N;
    struct jogador vet[P];
    for(int i=0; i<P; i++){
        for(int j=0; j<M; j++){
            cin>>a>>b;
            c=converte(b);
            vet[i].mao.push_back(make_pair(a, c));
        }
    }
    for(int i=(P*M); i<N; i++){
        cin>>a>>b;
        c=converte(b);
        baralho.push_back(make_pair(a, c));
    }
    /*
    for(int i=0; i<P; i++){
        sort(vet[i].mao.begin(), vet[i].mao.end());
    }

    cout<<endl;
    for(int i=0; i<P; i++){
        for(int j=0; j<M; j++){
            cout<<vet[i].mao[j].first<<" "<<vet[i].mao[j].second<<endl;
        }
        cout<<endl;
    }
    for(int i=0; i<baralho.size(); i++){
        cout<<baralho[i].first<<" "<<baralho[i].second<<endl;
    }
    */
}
