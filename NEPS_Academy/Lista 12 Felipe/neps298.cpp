#include <bits/stdc++.h>
using namespace std;

typedef tuple<int, int, int> t_edge;

int Find(int G[], int x){
    while(G[x]!=x){
        G[x] = G[G[x]];
        x=G[x];
    }
    return x;
}

int Union(int G[], int Size[], int a, int b){
    int A=Find(G, a);
    int B=Find(G, b);

    if(A==B) return 0;

    if(Size[A]<Size[B]){
        Size[B]+=Size[A];
        G[A]=B;
        return B;
    }
    else{
        Size[A]+=Size[B];
        G[B]=A;
        return A;
    }
}

vector<t_edge> kruskal(vector<t_edge> &E, int N){

    int G[N+1], Size[N+1];
    for(int i=1; i<N+1; i++){
        G[i]=i; Size[i]=1;
    }

    sort(E.begin(), E.end());

    vector<t_edge> M;

    for(auto e : E){
        int g = Union(G, Size, get<1>(e), get<2>(e));
        if(g!=0){
            M.push_back(e);
        }
        if(Size[g]==N) break;
    }

    return M;
}



int main(){
    ios_base::sync_with_stdio(false);

    int N, M;
    cin>>N>>M;

    vector<t_edge> E;

    for(int i=0; i<M; i++){
        int u, v, C;
        cin>>u>>v>>C;
        E.push_back(make_tuple(C,u,v));
    }

    vector<t_edge> K=kruskal(E, N);

    long long int soma=0;
    for(auto e : K){
        //cout<<get<0>(e)<<"\t"<<get<1>(e)<<"\t"<<get<2>(e)<<endl;
        soma+=get<0>(e);
    }

    cout<<soma<<"\n";
}
