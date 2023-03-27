#include <iostream>
using namespace std;

/**< Huaauhahhuahau */
void hua(){
    int cont=0;
    string Risada, RisVog, RisInv;
    cin>>Risada;
    for(int i=0; i<Risada.size(); i++){
        if(Risada[i]=='a' or Risada[i]=='e' or Risada[i]=='i' or Risada[i]=='o' or Risada[i]=='u')
            RisVog+=Risada[i];
    }
    for(int i=RisVog.size()-1; i>=0; i--)
        RisInv+=RisVog[i];
    for(int i=0; i<RisVog.size(); i++){
        if(RisVog[i]==RisInv[i]) cont++;
    }
    if(RisVog==RisInv) cout<<"S";
    else cout<<"N";
}

/**< INT MAIN */
int main(){
    hua();
    return 0;
}

