#include <bits/stdc++.h>
using namespace std;

typedef tuple<int, int, int> t_edge;

int INF = 99999999;
typedef pair<int, int> pii;
vector<t_edge> prim(vector<pii> G[], int N, int x){

    bool visited[N+1]; int distance[N+1];
    priority_queue<t_edge> PQ;

    for(int i=0; i<N+1; i++){
        visited[i]=false; distance[i]=INF;
    }

    distance[x]=0;
    PQ.push(make_tuple(0, x, x));
    vector<t_edge> M;

    while(!PQ.empty()){
        int u=get<2>(PQ.top());
        int v=get<1>(PQ.top()); PQ.pop();
        if(visited[v]) continue;
        visited[v] = true;
        if(u!=v) M.push_back(make_tuple(distance[v], u, v));

        for(auto w : G[v]){
            int b = w.first, peso = w.second;
            if(peso<distance[b]){
                distance[b]=peso;
                PQ.push(make_tuple(-distance[b], b, v));
            }
        }
    }

    return M;
}

int main(){
    ios_base::sync_with_stdio(false);

    int N, M;
    cin>>N>>M;

    vector<pii> G[N+1];

    for(int i=0; i<M; i++){
        int u, v, C;
        cin>>u>>v>>C;
        G[u].push_back(make_pair(v, C));
        G[v].push_back(make_pair(u, C));
    }

    vector<t_edge> K = prim(G, N, 0);
    int soma=0;
    for(auto e : K){
        soma+=get<0>(e);
    }

    cout<<soma<<"\n";
}
