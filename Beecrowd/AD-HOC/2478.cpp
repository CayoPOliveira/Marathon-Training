#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

map<string, string[3]> vet;

int main(){
    int p, cont;
    bool flag;
    string c, d, e;
    scanf("%d", &p);
    string a, b;
        for(int i=0; i<p; i++){
            cin>>a>>c>>d>>e;
            vet[a][0]=c;
            vet[a][1]=d;
            vet[a][2]=e;
        }
        cont=0;
        cin>>c>>b;
        while(!cin.eof()){
            flag=0;
            if(vet[c][0]==b or b==vet[c][1] or b==vet[c][2]){
                flag=1;
            }
            if(flag){
                cout<<"Uhul! Seu amigo secreto vai adorar o/"<<endl;
                cont++;
            }
            else cout<<"Tente Novamente!"<<endl;
            cin>>c>>b;
        }

        scanf("%d", &p);
}
