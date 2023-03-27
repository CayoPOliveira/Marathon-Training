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

    poi( (p1+p2)/2.0 );

    return 0;
}

