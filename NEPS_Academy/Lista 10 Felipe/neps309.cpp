#include <iostream>
#include <vector>
#include <stack>
#define TAM  1000//TAM é o tamanho do vetor (número de vértices)
using namespace std;


vector<int> vizinhos[TAM+1];
int componente[TAM+1];

void DFS_nr(int x){  //DFS não recursiva
    stack<int> pilha;
    pilha.push(x);
    while(!pilha.empty()){
        int v = pilha.top();
        pilha.pop();
        for(int i=0; i < vizinhos[v].size(); i++){
            int u = vizinhos[v][i];
            if(componente[u] ==-1){
                pilha.push(u);
                componente[u] = componente[v];
            }
        }
    }
}

int componente_completa(int n){
    for(int i=1; i<=n; i++){
        componente[i]=-1;
    }
    int N_componentes = 0;
    for(int i=1; i<=n; i++){
        if(componente[i]==-1){
            N_componentes++;
            componente[i] = N_componentes;
            DFS_nr(i);
        }
    }
    return N_componentes;
}

int main(){
    int n, m;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        vizinhos[a].push_back(b);
        vizinhos[b].push_back(a);
    }
    int times = componente_completa(n);
    cout<<times<<endl;
}
