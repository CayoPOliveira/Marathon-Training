#include <iostream>
using namespace std;

void poi( double x)
{
    if(x>=7)
        cout << "Aprovado";
    else if(x>=4)
        cout << "Recuperacao";
    else
        cout << "Reprovado";
}
int main()
{
    double p1,p2;

    cin >> p1 >> p2 ;
    //poi( (p1+p2)/2.0 );

    if(p1==0) cout<<"C";
    else if(p2 == 0) cout<<"B";
    else cout<<"A";

    return 0;
}
