#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    int k, n;
    while(cin>>k>>n){
        int j=0;
        int* marcados = (int*)malloc(n*sizeof(int));
        int* seq = (int*) malloc(k*sizeof(int));
        for(int i=0; i<k; i++){
            if(i<n) marcados[i]=0;
            cin>>seq[i];
        }
        for(int i=0; i<k; i++){
            if(!marcados[seq[i]-1]){
                marcados[seq[i]-1] = 1;
                seq[j]=seq[i];
                j++;
            }
        }

        for(int i=0; i<j; i++){
            if(i!=0) cout<<" ";
            cout<<seq[i];
        }
        cout<<"\n";

        free(marcados);
        free(seq);
    }
    return 0;
}
