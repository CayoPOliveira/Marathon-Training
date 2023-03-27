#include <iostream>
using namespace std;

void divisores();

int main()
{
    divisores();
}

void divisores()
{
    int x, i;
    cin >> x;
    for(i=1; i<=x; i++){
        if(x%i==0) cout << i << " ";
    }
}

