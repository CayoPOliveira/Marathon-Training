#include <iostream>

using namespace std;

int main(){
    int p;
    cin>>p;
    int vet[p];
    for(int i=1, j=0; i<p; i+=2, j++){
        vet[j]=i;
        if(i==p-1){
            i=-2;
        }
    }
    int cont=0, i=0;
    while(1){
        i=vet[i];
        cont++;
        if(i==0) break;
    }
    cout<<cont<<endl;
}
