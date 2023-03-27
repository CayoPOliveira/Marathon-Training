#include <bits/stdc++.h>
using namespace std;

int INF = 99999999;
typedef vector< pair<int, int> > vpii;

int DJ(vpii G[], int N, int u, int v){//u->...->v

    bool visited[N+1]; int distance[N+1];
    priority_queue<pair<int,int>> PQ;

    for(int i=0; i<N+1; i++){
        visited[i]=false;
        distance[i]=INF; //valor máximo (infinito)
    }

    distance[u] = 0; //inicio em x
    PQ.push({0,u});

    while (!PQ.empty()) {
        int a = PQ.top().second; PQ.pop();

        if (visited[a]) continue;
        visited[a] = true;

        for (auto u: G[a]) {
            int b = u.second, w = u.first;

            if (distance[a]+w < distance[b]) {
                distance[b] = distance[a]+w;
                PQ.push({-distance[b], b}); //ordenação crescente em PQ
                //cout<<"diatancia a: "<<distance[a]<<"\nw: "<<w<<"\ndistancia b: "<<distance[b]<<endl;;
            }
        }
    }
    /**
    for(int i=0; i<N; i++){
        vpii K = G[i];
        cout<<"Vizinhos de "<<i<<":\n";
        for(int j=0; j<K.size(); j++){
            cout<<K[j].second<<" buracos: "<<K[j].first<<"\n";
        }

        cout<<"Distancia "<<i<<": "<<distance[i]<<endl;
    }
    //*/
    return distance[v];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin>>N>>M;

    vpii Viz[N+2];

    for(int i=0; i<M; i++){
        int x, y, b;
        cin>>x>>y>>b;

        Viz[x].push_back(make_pair(b, y));
        Viz[y].push_back(make_pair(b, x));
    }

    int MenB = DJ(Viz, N+2, 0, N+1);

    cout<<MenB<<"\n";

}
