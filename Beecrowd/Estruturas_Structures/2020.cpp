#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    int n, lista=1;
    while(cin>>n){
        cin.ignore();
        map<int, int> gnomo;
        map<int, char> duende;
        char l='A';
        for(int i=1; i<27; i++){
            gnomo[i]=i;
            duende[i]=l;
            l++;
        }
        if(lista>1) cout<<endl;
        cout<<"LISTA #"<<lista<<":"<<endl;
        lista++;
        string vet[n];
        for(int i=0; i<n; i++){
            string lin;
            stringstream ss;
            getline(cin, lin);
            ss<<lin;
            int j;
            while(ss>>j){
                if(j==27){ vet[i]+=' '; continue; }
                vet[i]+=duende.at(gnomo[j]);
                duende[27] = duende[ gnomo[j] ];
                for(int k=gnomo[j]; k<27; k++){
                    duende[k]=duende[k+1];
                }
                gnomo[27]= gnomo[j];
                for(int k=j; k<27; k++){
                    gnomo[k]=gnomo[k+1];
                }
            }
        }
        sort(vet, vet+n);
        for(int i=0; i<n; i++){
            cout<<vet[i]<<endl;
        }
    }
}
