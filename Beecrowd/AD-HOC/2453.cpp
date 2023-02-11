#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string in, out;
    getline(cin, in);
    for(int i=0; i<in.size(); i++){
        if(in[i]=='p'){
            out+=in[++i];
        }
        else{
            out+=in[i];
        }
    }
    out+='\n';
    cout<<out;
    return 0;
}