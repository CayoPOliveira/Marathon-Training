#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n, d;
    scanf("%d%d", &n, &d);
    int vet[2*n];
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
        vet[n+i]=vet[i];
    }
    int cont=0, soma=0, j=0;
    for(int i=0; i<n; i++){
        while(j < i+n and soma < d ){
            soma+=vet[j];
            j++;
        }
        if(soma==d) cont++;
        soma-=vet[i];
    }

    printf("%d\n", cont);
}
