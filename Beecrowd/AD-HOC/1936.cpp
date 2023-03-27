#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int N;
    cin>>N;

    vector<int> vet(N);
    vet[0]=1;
    int i=0;

    while(vet[i]<N){
        i++;
        vet[i] = vet[i-1]*i;
    }
    int soma=0;
    while(N!=0){
        while(vet[i]<=N){
            soma++;
            N-=vet[i];
        }
        i--;
    }
    cout<<soma<<endl;

}
