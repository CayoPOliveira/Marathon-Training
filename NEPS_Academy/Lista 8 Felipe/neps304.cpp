#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int vet[n];
    int i=0;

    for(int i=0; i<n; i++){
        cin>>vet[i];
    }

    int maior=0;
    int k = vet[0];
    for(int i=0; i<n; i++){
        k|=vet[i];
        if(k>maior) maior=k;
    }

    cout<<k;
}
