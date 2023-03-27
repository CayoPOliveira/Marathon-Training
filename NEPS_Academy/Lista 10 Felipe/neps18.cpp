#include <iostream>
#include <vector>

#include <queue>
using namespace std;

vector<int> Grafo[600];
int visit[600];
int N, M, I;
int INF = 120;
int Id[600];
int Pes[600];
int Idade[600];

void BFS( int n ){
    int Menor = INF;
    queue<int> fila;
    for(int i=1; i<=N; i++){
        visit[i]=0;
    }
    fila.push(n);
    visit[n]=1;
    while(!fila.empty()){
        int k = fila.front();
        fila.pop();
        for(int i=0; i<Grafo[k].size(); i++){
            int l = Grafo[k][i];
            if(visit[l]==0){
                visit[l]=1;
                fila.push(l);
                int j = Pes[l];
                if(Idade[j] < Menor) Menor = Idade[j];
            }
        }
    }
    if(Menor == INF) cout<<"*"<<endl;
    else cout<<Menor<<endl;
}

int main(){
    cin>>N>>M>>I;
    for(int i=1; i<=N; i++){
        Id[i]=i;
        Pes[i]=i;
        cin>>Idade[i];
    }

    for(int i=0; i<M; i++){
        int x, y;
        cin>>x>>y;
        Grafo[y].push_back(x);
    }

    for(int i=0; i<I; i++){
        char op;
        cin>>op;
        if(op=='P'){
            int a;
            cin>>a;
            BFS(Id[a]);
        }
        if(op=='T'){
            int a, b;
            cin>>a>>b;
            int tid = Id[b];
            Id[b]=Id[a];
            Pes[Id[b]]=b;
            Id[a]=tid;
            Pes[Id[a]]=a;
        }
    }
}
