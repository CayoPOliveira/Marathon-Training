#include <iostream>

using namespace std;

void poi( int x)
{
    if(x%2==0)
        cout << "Bino";
    else
        cout << "Cino";
}
int main()
{
    int p1,p2;

    cin >> p1 >> p2 ;

    poi(p1+p2);

    return 0;
}
