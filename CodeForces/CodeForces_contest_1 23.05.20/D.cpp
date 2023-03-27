#include<iostream>
#include <cstdio>

using namespace std;

int Find(int G[], int x){
    while(G[x]!=x){
        G[x] = G[G[x]];//path compression
        x = G[x];
    }
    return x;
}
void Union(int G[], int size[], int a, int b){
    int A = Find(G, a);//set of a
    int B = Find(G, b);//set of b
    if(size[A]==0 and size[B]==0) return;
    if(size[A]<size[B]){//smallest points to the bigger
        if(size[A]==0) size[A]++;
        size[B]+=size[A];//update size
        G[A]=B;
    }
    else{
        if(size[B]==0)size[B]++;
        size[A]+=size[B];
        G[B]=A;
    }
    return;
}


int main(){
    int n, f;
    long long q;
    cin>>n>>f>>q;
    int P[n], qtd[n];
    for(int i=1; i<=n; i++){
        P[i]=i;
        qtd[i]=0;
    }
    for(int i=0; i<f; i++){
        int x;
        cin>>x;
        qtd[x]=1;
    }
    for(long long int i=0; i<q; i++){
        int op, a, b;
        cin>>op>>a;
        if(op==1){
            cin>>b;
            Union(P, qtd, a, b);
        }
        if(op==2){
            a=Find(P, a);
            cout<<qtd[a]<<endl;
        }
    }
}
