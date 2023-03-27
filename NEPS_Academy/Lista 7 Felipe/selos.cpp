#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

bool primos(long int n){
    long int raiz = sqrt(n);
    int vet[raiz+1];
    for(int i=2; i<=raiz; i++) vet[i]=i;
    for(int i=2; i<=raiz; i++){
            if(n%i==0) return 1;
            for(int j=i*2; j<=raiz; j+=i){
            vet[j]=0;
        }
    }
    return 0;
}

int main(){
    long int n;
    scanf("%lld", &n);
    if(primos(n)) printf("S\n");
    else printf("N\n");
}
