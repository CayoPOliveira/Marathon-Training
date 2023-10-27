#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    int max = 1, soma=1, a, b;
    cin>>a;
    for(int i=1; i<N; i++){
        cin>>b;
        // cout<<a<<" "<<b<<" : "<<max<<" "<<soma<<endl;
        if(a==b) soma++;
        else if(max<soma){
            max=soma;
            soma=1;
            a=b;
        }
        else{
            soma = 1;
            a = b;
        }

    }
    if(max<soma) max=soma;
    cout<<max<<endl;
}
