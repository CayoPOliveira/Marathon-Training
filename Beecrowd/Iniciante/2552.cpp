#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    while(!cin.eof()){
        bool mat[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>mat[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]) cout<<"9";
                else{
                    int cont=0;
                    if(i>0) if(mat[i-1][j]) cont++;
                    if(j>0) if(mat[i][j-1]) cont++;
                    if(i<n-1) if(mat[i+1][j]) cont++;
                    if(j<m-1) if(mat[i][j+1]) cont++;
                    cout<<cont;
                }
            }
            cout<<endl;
        }
        cin>>n>>m;
    }
    return 0;
}
