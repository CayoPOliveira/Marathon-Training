#include <iostream>

using namespace std;

struct letras{
    int i;
    char l;
};

int main(){
    string frase;
    getline(cin, frase);
    while(!cin.eof()){
        int cont=0;
        int flag=0;
        char a, b;
        int n=frase.size();
        for(int i=0; i<n; i++){
            if(frase[i]>='A' and frase[i]<='Z') frase[i]=(char)(frase[i]+32);
        }
        for(int i=0; i<n; i++){
            if(i==0){
                flag=0;
                a=frase[i];
                continue;
            }
            if(frase[i-1]==' ')
            {
                b=frase[i];
                if(a==b & flag==0){
                    cont++;
                    flag=1;
                }
                if(a!=b){
                    flag=0;
                    a=b;
                }
            }
        }
        cout<<cont;

        cout<<endl;
        getline(cin, frase);
    }
}
