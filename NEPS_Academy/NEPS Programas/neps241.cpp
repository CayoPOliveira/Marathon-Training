#include <iostream>
using namespace std;

/**< Campo minado */ /**< //////////////// */
void campominado()
{
    int n;
    cin >> n;
    int vet[n], vetr[n];

    for(int i=0; i<n; i++) vetr[i]=0;

    for(int i=0; i<n; i++)
    {
        cin >> vet[i];
        if(vet[i]==1)
        {
            if(i-1>=0)vetr[i-1]++;
            vetr[i]++;
            if(i+1<n)vetr[i+1]++;
        }
    }

    for(int i=0; i<n; i++) cout<<vetr[i]<<endl;
}

/**< INT MAIN *//**< ////////////// */
int main()
{
    campominado();
}

