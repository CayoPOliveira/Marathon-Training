#include <iostream>


using namespace std;

int main(){

    int n, m;
    cin>>n;
    while(!cin.eof()){
        string num;
        char c;
        int soma=0;
        for(int i=0; i<n; i++){
            cin>>c;
            num+=c;
            soma+=c-'0';
        }
        cout<<soma<<" ";
        if(soma%3==0)cout<<"sim";
        else cout<<"nao";
        cout<<endl;
        cin>>n;
    }
}
