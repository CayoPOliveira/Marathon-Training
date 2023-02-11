#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, soma=0;
    cin>>n>>k;
    int vet[n], ans[n];
    for(lli i=0; i<n; i++){
        cin>>vet[i];
        soma+=vet[i];
    }
    for(int i=0; i<n; i++) ans[i]=soma*(k/n);
    k%=n;
    int j=0;
    while(k--){
        for(int i=0; i<n; i++, j++){
            if(j==n) j=0;
            ans[i] += *(vet+j);
        }
        j--;
        if(j==-1) j=n-1;
    }

    for(int i=0; i<n; i++){
        cout<<ans[i];
        if(i<n-1) cout<<" ";
        else cout<<"\n";
    }


    return 0;
}