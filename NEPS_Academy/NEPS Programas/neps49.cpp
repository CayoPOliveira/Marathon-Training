#include <iostream>
using namespace std;

/**< Fita Colorida */ /**< //////////////// */
int ZeroE(int vet[], int i)
{
    int cont=0, j;
    for(j=i; vet[j]!=0 and vet[j]!=10; j--, cont++);
    if(vet[j]==10 or cont>9) cont=9;
    return cont;
}
int ZeroD(int vet[], int i)
{
    int cont=0, j;
    for(j=i; vet[j]!=0 and vet[j]!=10; j++, cont++);
    if(vet[j]==10 or cont>9) cont=9;
    return cont;
}

void fita()
{
    int n, contE, contD;
    cin>>n;
    int vet[n+2];

    vet[0]=vet[n+1]=10;
    for(int i=1; i<=n; i++) cin>>vet[i];

    for(int i=1; i<n+1; i++)
    {
        if(vet[i]==0) continue;
        contE=ZeroE(vet, i);
        contD=ZeroD(vet, i);
        if(contE < contD) vet[i]=contE;
        else vet[i]=contD;
    }

    for(int i=1; i<n+1; i++) cout << vet[i] << " ";
}

/**< INT MAIN *//**< ////////////// */
int main()
{
    fita();
}

