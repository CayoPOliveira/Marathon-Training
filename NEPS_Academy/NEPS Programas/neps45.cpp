#include <iostream>
using namespace std;

/**< Torre */ /**< /////////////////////////////////// */
void torre()
{
    int n, somaref=0, soma=0;
    cin>>n;
    int matriz[n][n], lin[n], col[n];

    for(int i=0; i<n; i++) col[i]=0;
    for(int i=0; i<n; i++)
    {
        lin[i]=0;
        for(int j=0; j<n; j++){
            cin>>matriz[i][j];
            lin[i]+=matriz[i][j];
            col[j]+=matriz[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            soma = lin[i]+col[j]-(2*matriz[i][j]);
            if(soma>somaref) somaref=soma;
        }
    }

    cout<<somaref;
}

/**< INT MAIN *//**< ////////////// */
int main()
{
    torre();
}

