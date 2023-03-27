#include <iostream>
using namespace std;

/**< Bancos debentures *//**< //////////////////// */

struct bank{
    int n_bank;
    int reserva;
};

void bancos(){
    int flag, //S=0 ou N=1
        nb=0,   //número de bancos
        nd=0,   //número de debentures
        bd=0,   //banco devedor
        bc=0,   //banco credor
        val=0;  //valor do debenture

    while(1){
        flag=0;
        cin >> nb >> nd;
        if(nb == 0) break;

        struct bank banco[nb];
        for(int i=0; i<nb; i++)
        {
            banco[i].n_bank = i+1;
            cin >> banco[i].reserva;
        }

        for(int i=0; i<nd; i++)
        {
            cin >> bd >> bc >> val;
            banco[bd-1].reserva-=val;
            banco[bc-1].reserva+=val;
        }

        for(int i=0; i<nb; i++)
        {
            if(banco[i].reserva<0) flag=1;
        }

        if(flag==1)
        {
            cout<<"N"<<endl;
            continue;
        }
        cout<<"S"<<endl;
    }
}

/**< INT MAIN *//**< ////////////// */
int main()
{
    bancos();
}
