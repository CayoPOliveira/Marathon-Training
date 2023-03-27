#include <iostream>
#include <map>

using namespace std;

int main(){
    int a, v;
    int teste=1;
    while(1){
        cin>>a>>v;
        if(!a and !v) break;

        map<int, int> par;
        for(int i=1; i<=a; i++){
            par.insert(make_pair(i, 0));
        }
        int maior = 0;
        for(int i=0; i<v; i++){
            int x, y;
            cin>>x>>y;
            par[x]++;
            if(par[x] > maior) maior = par[x];
            par[y]++;
            if(par[y] > maior) maior = par[y];
        }
        int espaco=0;
        if(teste>1)cout<<endl;
        cout<<"Teste "<<teste++<<endl;
        for(int i=1; i<=a; i++){
            if(par[i]==maior){
                if(espaco) cout<<" ";
                espaco++;
                cout<<i;
            }
        }
        cout<<endl;
    }
}
