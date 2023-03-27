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
    int x,p1,p2,soma;

    cin >> x;
    soma =0;
    for(int i=0; i<x; i++){
        cin >> p1 >> p2 ;
        if(p1>p2) soma += p2;
    }
    cout << soma;
    return 0;
}

