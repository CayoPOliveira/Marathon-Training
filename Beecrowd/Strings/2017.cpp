#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
    string x; cin>>x;
    int k; cin>>k;
    long int menor = 100000000;
    int idx = 0;
    string y[5];
    for(int i=0; i<5; i++){
        int dist=0;
        cin>>y[i];
        for(int j=0; j<y[i].length(); j++){
            if(x[j] != y[i][j]){
                dist++;
            }
        }
        if(menor > dist){
            menor = dist;
            idx = i+1;
        }
    }
    if(menor > k){
        cout<<"-1\n";
        return 0;
    }
    cout<<idx<<"\n"<<menor<<"\n";
}
