#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, m;
    cin>>n>>m;
    char mat[n][m];
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j]=='#'){
                if(i-1<0 || j-1<0 || j+1==m || i+1==n){
                    count++;
                    continue;
                }
                if(mat[i-1][j]=='.' || mat[i+1][j]=='.' || mat[i][j-1]=='.' || mat[i][j+1]=='.'){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}
