#include <iostream>
#include <cmath>

using namespace std;

/**< Raizes *//**< ////////////////////////////// */
void raiz()
{
    double n, x;
    cin >> n;

    cout.precision(4);
    cout.setf(ios::fixed);

    for(int i; i<n; i++)
    {
        cin >> x;
        cout << sqrt(x) << endl;
    }
}


int main()
{
    raiz();
}

