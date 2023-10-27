#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, valor;
    cin>>N;
    vector<int> v;
    v.reserve(N+1);
    v[0]=0;
    for(int i=1; i<=N; i++){
        cin>>valor;
        v[i]=v[i-1]+valor;
    }
  
    int total = v[N];
    for(int j = 1; j<=N; j++){
        if(total - v[j] ==  v[j]){
            cout<<j<<"\n";
            break;
        }
    }
}
