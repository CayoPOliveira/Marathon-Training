#include <iostream>
#include <algorithm>
#define MAX 1123
using namespace std;

int cidade[MAX], tam[MAX];

int acha(int n){
    while(cidade[n]!=n){
        cidade[n]=cidade[cidade[n]];
        n=cidade[n];
    }
    return n;
}

int uniao(int A, int B){
    A = acha(A);
    B = acha(B);

    if(A==B) return 0;

    if(tam[A]<tam[B]){
        cidade[A]=B;
        return B;
    }

    else if(tam[A]>tam[B]){
        cidade[B]=A;
        return A;
    }

    else{
        cidade[A]=B;
        tam[B]++;
        return B;
    }

}


struct cipo{
    int a;
    int b;
    int c;
    bool operator < (struct cipo l){
        return c < l.c;
    }
};

void print_struct(struct cipo vet[], int m){
    for(int i=0; i<m; i++){
        cout<<vet[i].a<<" "<<vet[i].b<<" "<<vet[i].c<<endl;
    }
}

int main()
{
    int a, b, c;
    int inst = 1;
    int n, m;
    cin>>n>>m;
    while(!cin.eof()){
        for(int i=1; i<=n; i++){
            cidade[i]=i;
            tam[i]=1;
        }
        struct cipo vet[m];
        for(int i=0; i<m; i++){
            scanf("%d%d%d", &vet[i].a, &vet[i].b, &vet[i].c);
        }
        sort(vet, vet+m);
        long unsigned int custo = 0;
        for(int i=0; i<m; i++){
            int k = uniao(vet[i].a, vet[i].b);
            if(k) custo+=vet[i].c;
            if(tam[k] == n) break;
        }

        cout<<"Instancia "<<inst++<<endl<<custo<<endl<<endl;

        cin>>n>>m;
    }
}
