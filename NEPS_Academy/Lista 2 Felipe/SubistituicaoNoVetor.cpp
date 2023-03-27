#include <iostream>
#include <vector>

using namespace std;

int main(){
    int vet[10];
    vector<int> indices;
    int menor = 100;
    for(int i=0; i<10; i++){
        cin>>vet[i];
        if(vet[i]<menor){
            menor = vet[i];
        }
    }
    for(int i=0; i<10; i++){
        if(vet[i]==menor){
            vet[i]=-1;
            indices.push_back(i);
        }
    }
    cout<<"Menor: "<<menor<<endl<<"Ocorrencias: ";
    for(int i=0; i<indices.size(); i++){
        if(i>0) cout<<" ";
        cout<<indices[i];
    }
    cout<<endl;
    for(int i=0; i<10; i++){
        if(i>0) cout<<" ";
        cout<<vet[i];
    }
    cout<<endl;


}
