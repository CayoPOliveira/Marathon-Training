#include<iostream>
#include <vector>
using namespace std;

vector<int> vet[112345];
bool flag;

int DFS(int n){
    int sz = vet[n].size();
    int Tam = 1, T=1, Ref;
    for(int i=0; i<sz; i++){
        int K = vet[n][i];
        T = DFS(K);
        if(!i) Ref=T;
        else if(Ref!=T) flag=false;
        Tam += T;
    }
    return Tam;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        vet[i].clear();

    }
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        vet[b].push_back(a);
    }
    flag=true;
    DFS(0);

    if(flag) cout<<"bem\n";
    else cout<<"mal\n";
}
