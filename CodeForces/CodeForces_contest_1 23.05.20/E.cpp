#include<iostream>
#include<algorithm>

using namespace std;


struct onib{
    int ind;
    int oi;
    int inter;
    int txi;
    int valido;
};

bool org(struct onib a, struct onib b){
    if(a.valido!=b.valido) return a.valido>b.valido;
    if(a.oi!=b.oi) return a.oi<b.oi;
    if(a.txi!=b.txi) return a.txi<b.txi;
    return a.ind<b.ind;
}

int main(){

    int n, m, d;
    cin>>n>>m>>d;

    struct onib vet[n+1];

    for(int i=1; i<=n; i++){
        vet[i].ind=i;
        cin>>vet[i].oi>>vet[i].inter>>vet[i].txi;
        while(vet[i].oi<m) vet[i].oi+=vet[i].inter;
        if(vet[i].txi<=d) vet[i].valido=1;
        else vet[i].valido=0;
    }

    sort(vet+1, vet+n+1, org);
    /*
    for(int i=1; i<=n; i++){
        cout<<vet[i].ind<<" "<<vet[i].oi<<" "<<vet[i].txi<<endl;
    }
    */
    if(vet[1].valido==1) cout<<vet[1].ind<<endl;
    else cout<<"-1"<<endl;


}
