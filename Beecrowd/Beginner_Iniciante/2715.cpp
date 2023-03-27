#include<iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(!cin.eof()){
        long long int vet[n+1];
        for(int i=1; i<=n; i++){
            scanf("%lld", &vet[i]);
            if(i!=1) vet[i]+=vet[i-1];
        }

        //for(int i=1; i<=n; i++){ cout<<vet[i]<<" "; } cout<<endl;
        long long int dif = abs( vet[n] - (2*vet[1]) ) ;
        //cout<<dif<<endl<<endl;

        for(int i=2; i<n; i++){
            long long int a;
            a = abs( vet[n] - (2*vet[i]) );
            if(a<dif) dif=a;
            //cout<<a<<" ";
        }

        cout<<dif<<endl;
        cin>>n;
    }
}


