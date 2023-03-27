#include <iostream>
#include <bitset>
using namespace std;

void print_set(bitset<1005> vet[], int p, int n){
    for(int i=0; i<p; i++){
        for(int j=0; j<n; j++){
            cout<<vet[i][j]<<" ";
        }
        cout<<endl;
    }
}
//print_set(vet, p, n);
int main(){
    int p, n, c;
    while(1){
        cin>>p>>n>>c;
        if(!p and !n and !c) break;
        int cont=0;

        bitset<1005> vet[p];
        for(int i=0; i<n; i++){
            for(int j=0; j<p; j++){
                int x;
                cin>>x;
                if(x==1) vet[j].set(i);
            }
        }


        for(int i=0; i<p; i++){
            int contadorset=0;
            for(int j=0; j<n+1; j++){
                if(vet[i].test(j)) contadorset++;
                else{
                    if(contadorset>=c) cont++;
                    contadorset = 0;
                }
            }
        }
        cout<<cont<<endl;
    }
}
