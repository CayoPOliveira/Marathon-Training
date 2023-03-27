#include <iostream>
#include <queue>

using namespace std;

int pos[2] = {-1, 1};

int mat[1123][1123], dist[1123][1123];
int n, m;
int ini,inj,fni,fnj;

void distancia(){
    queue< pair<int, int> > fila;
    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=m+1; j++){
            dist[i][j]=0;
            if(i==0 or i==n+1 or j==0 or j==m+1){
                dist[i][j]=-1;
            }
        }
    }
    fila.push(make_pair(ini, inj));
    dist[ini][inj]=1;
    while(!fila.empty()){
        pair<int, int> aux = fila.front();
        int di=aux.first, dj=aux.second;
        fila.pop();
        if(mat[di-1][dj]!=0 and dist[di-1][dj]==0){
            dist[di-1][dj] = dist[di][dj] + 1;
            fila.push(make_pair(di-1, dj));
        }
        if(mat[di][dj-1]!=0 and dist[di][dj-1]==0){
            dist[di][dj-1] = dist[di][dj] + 1;
            fila.push(make_pair(di, dj-1));
        }
        if(mat[di+1][dj]!=0 and dist[di+1][dj]==0){
            dist[di+1][dj] = dist[di][dj] + 1;
            fila.push(make_pair(di+1, dj));
        }
        if(mat[di][dj+1]!=0 and dist[di][dj+1]==0){
            dist[di][dj+1] = dist[di][dj] + 1;
            fila.push(make_pair(di, dj+1));
        }
    }
}
void print_dist(){
    cout<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>mat[i][j];
            if(mat[i][j]==2){
                ini=i;
                inj=j;
            }
            if(mat[i][j]==3){
                fni=i;
                fnj=j;
            }
        }
    }
    distancia();
    //print_dist();
    cout<<dist[fni][fnj]<<endl;
}
