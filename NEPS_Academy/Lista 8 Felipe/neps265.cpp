#include <iostream>
#include <queue>

using namespace std;

struct tipo{
    int ind;
    int tempo;
    int lig;
    bool operator< (const tipo&l) const{
        if(tempo != l.tempo) return tempo>l.tempo;
        return ind > l.ind;
    }
};
priority_queue<tipo> pq;

int main(){
    int n, k;
    cin>>n>>k;
    struct tipo aux;
    for(int i=1; i<=n; i++){
        aux.ind=i;
        aux.tempo=aux.lig=0;
        pq.push(aux);
    }

    for(int i=0; i<k; i++){
        int tmp;
        cin>>tmp;
        aux=pq.top();
        aux.tempo+=tmp;
        aux.lig++;
        pq.pop();
        pq.push(aux);
    }

    int vet[n+1];
    while(!pq.empty()){
        aux=pq.top();
        vet[aux.ind] = aux.lig;
        pq.pop();
    }

    for(int i=1; i<=n; i++){
        cout<<i<<" "<<vet[i]<<endl;
    }
}
