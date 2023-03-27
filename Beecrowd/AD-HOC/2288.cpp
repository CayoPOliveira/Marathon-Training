#include<iostream>

using namespace std;

int main(){
    int m, n;
    int teste=1;
    while(1){
        cin>>m>>n;
        if(!m and !n) break;
        int mat[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>mat[i][j];
            }
        }

        int x=0, y=0; /** Lembrar q o X é o deslocamento nas colunas e Y nas linhas */
        while(1){
            int a, b;
            cin>>a>>b;
            if(!a and !b) break;
            x+=a;
            y+=b;
        }
        x=x%n; y=y%m;

        cout<<"Teste "<<teste<<endl;
        teste++;

        for(int i=y, conti=0; conti<m; i++, conti++){
            if(i<0) i=m+i;
            if(i==m) i=0;
            for(int j=-x, contj=0; contj<n; j++, contj++){
                if(j<0) j = n+j;
                if(j==n) j=0;
                if(contj>0) cout<<" ";
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
