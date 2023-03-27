#include <iostream>
using namespace std;

int main()
{
    long int x,p1,soma;
    int i;

    cin >> x;
    soma = 0;

    for(i=0; i<x; i++)
    {
        cin >> p1;
        soma = soma + p1;
        if(soma>=1000000)
            break;
    }
    cout << i+1;
    return 0;
}
