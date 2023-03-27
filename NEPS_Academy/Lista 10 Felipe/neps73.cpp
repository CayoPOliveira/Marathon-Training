#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
using namespace std;

vector<int> Desc[11234];
int Gert[11234];
int Ger_Pres[11234];
int N_Ger=0;
int comp[11234];
int M, N;

void BFS(){
    for(int i=0; i<=M; i++){
        Gert[i]=Ger_Pres[i]=comp[i]=0;
    }
    queue<int> fila;
    fila.push(0);
    while(!fila.empty()){
        int K = fila.front();
        fila.pop();
        for(int i=0; i<Desc[K].size(); i++){
            int J=Desc[K][i], aux;
            aux = comp[J]=comp[K]+1;
            if(aux>N_Ger) N_Ger = aux;
            Gert[aux]++;
            fila.push(J);
        }
    }
}

int main(){
    scanf("%d%d", &M, &N);
    //cin>>M>>N;
    for(int i=1; i<=M; i++){
        int x;
        scanf("%d", &x);
        Desc[x].push_back(i);
    }
    BFS();
    /*
    for(int i=0; i<M; i++){
        for(int j=0; j<Desc[i].size(); j++){
            cout<<Desc[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<M; i++){
        cout<<i<<": "<<comp[i]<<endl;
    }
    //*/
    for(int i=0; i<N; i++){
        int x;
        scanf("%d", &x);
        int ger = comp[x];
        Ger_Pres[ger]++;
    }
    for(int i=1; i<=N_Ger; i++){
        int pres = Ger_Pres[i], tot = Gert[i];
        float k = (double)(pres*100)/tot;
        printf("%.2f ", k);

        //cout<<endl<<pres<<" "<<tot<<" "<<k<<endl;
    }
}
