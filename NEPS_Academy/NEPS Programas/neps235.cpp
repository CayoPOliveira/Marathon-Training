#include <iostream>
using namespace std;

/**< Telefone (P1) */
void telefone(){
    string num;
    cin>>num;
    for(int i=0; i<num.size(); i++){
        if(num[i]=='-')
        {
            cout<<num[i];
            continue;
        }
        if(num[i]>='A' and num[i]<='C'){
            cout<<2;
            continue;
        }
        if(num[i]>='D' and num[i]<='F'){
            cout<<3;
            continue;
        }
        if(num[i]>='G' and num[i]<='I'){
            cout<<4;
            continue;
        }
        if(num[i]>='J' and num[i]<='L'){
            cout<<5;
            continue;
        }
        if(num[i]>='M' and num[i]<='O'){
            cout<<6;
            continue;
        }
        if(num[i]>='P' and num[i]<='S'){
            cout<<7;
            continue;
        }
        if(num[i]>='T' and num[i]<='V'){
            cout<<8;
            continue;
        }
        if(num[i]>='W' and num[i]<='Z'){
            cout<<9;
            continue;
        }
        cout<<num[i];
    }
    cout<<endl;
}

/**< INT MAIN */
int main()
{
    telefone();
    return 0;
}
