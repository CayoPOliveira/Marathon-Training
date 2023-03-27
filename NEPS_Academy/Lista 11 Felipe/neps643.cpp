#include <bits/stdc++.h>

using namespace std;
typedef vector< pair<int, int> > vpii;

int C, E, L, P;

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
            }
        }
    }

    for(int i=1; i<=C; i++){
        if(distance[i]<=v and distance[i]>0) cout<<i<<" ";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int teste=0;
    while(1){
        cin>>C>>E>>L>>P;
        if(!C and !E and !L and !P) break;

        vpii Vizinho[C+1];
        for(int i=0; i<=C; i++){
            Vizinho[i].clear();
        }

        for(int i=0; i<E; i++){
            int x, y;
            cin>>x>>y;
            Vizinho[x].push_back(make_pair(1, y));
            Vizinho[y].push_back(make_pair(1, x));
        }


        teste++;
        cout<<"Teste "<<teste<<"\n";

        DJ(Vizinho, C+1, L, P);

        cout<<"\n\n";

    }

}
