#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main(){
    int h, p, f;
    cin>>h>>p>>f;
    while(h and p and f){
        int mat[h][p];
        for(int i=0; i<h; i++){
            for(int j=0; j<p; j++){
                scanf("%d", &mat[i][j]);
            }
        }
        int fila[f];
        for(int i=0; i<f; i++){
            scanf("%d", &fila[i]);
        }

        int k=0;
        for(int j=p-1; j>=0; j--){
            for(int i=h-1; i>=0; i--){
                if(mat[i][j]==0){
                    mat[i][j]=fila[k];
                    k++;
                }
                if(k==f) break;
            }
            if(k==f) break;
        }

        for(int i=0; i<h; i++){
            int caso=0;
            for(int j=0; j<p; j++){
                if(caso) cout<<" ";
                caso++;
                cout<<mat[i][j];
            }
            cout<<endl;
        }

        cin>>h>>p>>f;
    }

}
