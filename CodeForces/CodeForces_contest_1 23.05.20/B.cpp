#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    bool flag2=true;
    for(int i=0; i<n; i++){
        int x=vet[i];
        bool vet[n+1];
        bool flag=false;
        for(int j=1; j<=n; j++) vet[j]=true;
        for(int j=1, cont=0; vet[1]!=false; j++){
            if(j>n){
                if(!flag) break;
                j=1;
                flag=false;
            }
            if(vet[j]){
                cont++;
                if(j!=1) flag=true;
            }
            if(cont==x){
                vet[j]=false;
                cont=0;
            }
        }
        if(!flag){
            cout<<x<<endl;
            flag2=false;;
            break;

        }
    }
    if(flag2) cout<<"Nao quero mais brincar!"<<endl;
}
