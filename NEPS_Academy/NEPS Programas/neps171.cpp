#include <iostream>
#include <cmath>

using namespace std;

/**< Pot�ncia Simples *//**< /////////////////// */
void potencia(){
    double a, b;

    cin >> a >> b;

    cout.precision(4);
    cout.setf(ios::fixed);

    cout << pow(a,b);
}

int main()
{
    potencia();
}


