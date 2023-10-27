#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

struct camisa{
    string nome;
    char tam;
    string cor;
};

bool org(struct camisa a, struct camisa b){
    if(a.cor!=b.cor) return a.cor<b.cor;
    if(a.tam!=b.tam) return a.tam>b.tam;
    return a.nome<b.nome;
}

int main(){
    int caso=0;
    char c;
    int n;
    cin>>n;
    //cin>>c;
    while(n){
        struct camisa v[n];
        for(int i=0; i<n; i++){
            getchar();
            getline(cin, v[i].nome);
            //cin>>c;
            cin>>v[i].cor>>v[i].tam;
        }

        sort(v, v+n, org);

        if(caso) cout<<endl;
        caso++;

        for(int i=0; i<n; i++){
            cout<<v[i].cor<<" "<<v[i].tam<<" "<<v[i].nome<<endl;
        }

        cin>>n;
    }
}
