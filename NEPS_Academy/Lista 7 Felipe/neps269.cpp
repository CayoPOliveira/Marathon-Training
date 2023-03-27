#include <iostream>
using namespace std;

#define MAX 112345

void primos(int n){
    int vet[MAX];
    for(int i=2; i<=n; i++){
        vet[i]=i;
    }
    bool flag=false;
    for(int i=2; i*i<=n; ++i){
        if(vet[i]==i){
            for(int j=i*2; j<=n; j+=i){
                vet[j]=0;
            }
        }
        if(i>2)i++;
    }
    for(int i=2; i<=n; i++){
        if(vet[i]==i){
            cout<<i<<" ";
        }
    }

}

int main(){
    int n;
    cin>>n;
    primos(n);
}
