#include <iostream>

using namespace std;

void poi( int x)
{
    if(x>0)
        cout << "positivo";
    else if(x<0)
        cout << "negativo";
    else
        cout << "nulo";
}
int main()
{
    int p1,p2;

    cin >> p1 ;

    poi(p1);

    return 0;
}
