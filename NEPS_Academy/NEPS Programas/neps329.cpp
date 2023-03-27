#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    char mat[n+2][m+2];
    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=m+1; j++){
            if(i==0 || j==0 || i==n+1 || j==m+1) mat[i][j]='.';
            else cin>>mat[i][j];
        }
    }
    int cont=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(mat[i][j]=='#'){
                if(mat[i-1][j]=='.' || mat[i+1][j]=='.' || mat[i][j-1]=='.' || mat[i][j+1]=='.') cont++;
            }
        }
    }
    cout<<cont<<endl;
}
