#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    array<int, 2001> V = {};

    int k;
    while(N--){
        cin>>k;
        V[k]++;
    }

    for(int i=0; i<2001; i++){
        if(V[i]){
            cout<<i<<" aparece "<<V[i]<<" vez(es)\n";
        }
    }
    return 0;
}
