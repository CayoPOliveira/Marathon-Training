#include <iostream>
using namespace std;

/**< Código (OBI 2015) */ /**< //////////////// */
void codigo()
{
    int n, cont=0;
    cin >> n;
    int vet[n];
    for(int i=0; i<n; i++){
        cin>>vet[i];
        if(i>1)
            if(vet[i-2]==1)
                if(vet[i-1]==0)
                    if(vet[i]==0)
                        cont++;
    }
    cout << cont;
}

/**< INT MAIN *//**< ////////////// */
int main()
{
    codigo();
}

