#include <iostream>

using namespace std;

int main(){
    string carta;
    int flag=1;
    getline(cin, carta);
    for(int i=0; i<carta.size()-4; i++){
        if(carta[i]=='z' or carta[i]=='Z')
            if(carta[i+1]=='e' or carta[i+1]=='E')
                if(carta[i+2]=='l' or carta[i+2]=='L')
                    if(carta[i+3]=='d' or carta[i+3]=='D')
                        if(carta[i+4]=='a' or carta[i+4]=='A')
                            flag=0;
    }
    if(flag==1) cout<<"Link Tranquilo"<<endl;
    else cout<<"Link Bolado"<<endl;
}
