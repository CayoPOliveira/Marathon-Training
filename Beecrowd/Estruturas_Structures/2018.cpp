#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

struct pais{
    string nome;
    int o, p, b;
};

bool compara(struct pais a, struct pais b){
    if(a.o!=b.o) return a.o>b.o;
    if(a.p!=b.p) return a.p>b.p;
    if(a.b!=b.b) return a.b>b.b;
    if(a.nome!=b.nome) return a.nome<b.nome;
}

int main(){
    set<string> mapa;
    vector<struct pais> vet;
    struct pais aux;
    string N;
    string lug;
    //getline(cin, N);
    while(getline(cin, N)){
        if(N=="0") break;
        for(int i=0; i<3; i++){
            string lug;
            getline(cin,lug);
            if(mapa.find(lug)==mapa.end()){
                mapa.insert(lug);
                aux.nome=lug;
                aux.o=aux.p=aux.b=0;
                if(i==0)aux.o++;
                else if(i==1)aux.p++;
                else aux.b++;
                vet.push_back(aux);
            }
            else{
                for(int j=0; j<vet.size(); j++){
                    if(vet[j].nome==lug){
                        if(i==0)vet[j].o++;
                        else if(i==1)vet[j].p++;
                        else vet[j].b++;
                        break;
                    }
                }
            }
        }
        //getline(cin, N);
        //cout<<"oi"<<endl;
    }
    sort(vet.begin(), vet.end(), compara);
    cout<<"Quadro de Medalhas"<<endl;
    for(int i=0; i<vet.size(); i++){
        cout<<vet[i].nome<<" "<<vet[i].o<<" "<<vet[i].p<<" "<<vet[i].b<<endl;
    }
    cin>>N;
}
