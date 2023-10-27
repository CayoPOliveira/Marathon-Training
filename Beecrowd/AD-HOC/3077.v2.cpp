#include <bits/stdc++.h>
using namespace std;

int main(){
    uint32_t n, k; cin>>n>>k;
    uint64_t soma=0;
    uint64_t trab[n], S[n];
    for(int i=0; i<n; i++){
        trab[i]=0;
        cin>>S[i];
        soma+=S[i];
    }
    uint32_t rept = k/n;
    k = k % n;
    for(int i=0; i<n; i++){
        trab[i] = rept*soma;
    }

    for(int i=0; i<n; i++){
        int j=i, aux = k;
        while(aux--){
            trab[j]+=S[i];
            j++;
            if(j==n) j=0;
        }
    }

    for(int i=0; i<n; i++){
        if(i>0) cout<<" ";
        cout<<trab[i];
    }
    cout<<"\n";

    return 0;
}
