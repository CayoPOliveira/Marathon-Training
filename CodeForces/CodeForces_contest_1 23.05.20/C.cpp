#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    //cin>>n>>m;
    int vet[n+1], op[n+1], vac[n+1];
    for(int i=1; i<=n; i++){
        scanf("%d", &vet[i]);
        //cin>>vet[i];
        op[i]=0;
        //vac[i]=0;
    }
    int cont=0;
    for(int i=0; i<m; i++){
        int a, b, v;
        scanf("%d%d%d", &a, &b, &v);
        //cin>>a>>b>>v;
        for(int j=a; j<=b; j++){
            //if(vet[j]==0) continue;
            //vac[j]+=v;
            cont++;
            op[j]++;
            if(vet[j]>v) vet[j]-=v;
            else{
                vet[j]=0;
                cont-=op[j];
                op[j]=0;
            }
        }
    }
    printf("%d\n", cont);
    //cout<<cont<<endl;
}
