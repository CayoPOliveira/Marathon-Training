#include <iostream>
using namespace std;

void primo(int n){
    bool *P = (bool*) malloc( (n+1)*sizeof(bool) );
    for(int i=2; i<=n; i++) *(P+i) = true;
    for(int i=2; i*i <= n; i++){
        if( *(P+i) )
            for(int j=i*2; j<=n; j+=i)
                *(P+j)= false;
    }
    cout<<"2 ";
    for(int i=3; i<=n; i+=2){
        if( *(P+i) ) cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    primo(n);
}
