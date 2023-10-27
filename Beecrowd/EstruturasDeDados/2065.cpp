#include <iostream>
#include <queue>

using namespace std;

struct tipo{
    int i;
    int tp;
    int tempo;
    bool operator< (const tipo&l) const{
        if( tempo != l.tempo ) return tempo > l.tempo;
        return i>l.i;
    }
};
priority_queue<tipo> pq;


int main(){
    int n, m;
    cin>>n>>m;
    struct tipo aux;
    for(int i=0; i<n; i++){
        cin>>aux.tp;
        aux.i=i+1;
        aux.tempo=0;
        pq.push(aux);
    }

    for(int i=0; i<m; i++){
        aux = pq.top();
        pq.pop();
        int x;
        cin>>x;
        aux.tempo+= (aux.tp * x);
        pq.push(aux);
    }

    while(!pq.empty()){
        aux = pq.top();
        pq.pop();
        //cout<<aux.i<<" "<<aux.tempo<<" "<<aux.tp<<endl;
    }
    cout<<aux.tempo<<endl;
}
