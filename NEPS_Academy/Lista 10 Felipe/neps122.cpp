#include <iostream>
using namespace std;
int mat[210][210];
int vist[210][210];
int H, L;

int main(){
    cin>>H>>L;
    for(int i=0; i<=H+1; i++){
        for(int j=0; j<=L+1; j++){
            if(i==0 or i==H+1 or j==0 or j==L+1) mat[i][j]=-1;
            else cin>>mat[i][j];
        }
    }
}
