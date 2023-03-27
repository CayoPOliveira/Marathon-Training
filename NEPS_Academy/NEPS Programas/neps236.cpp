#include <iostream>
using namespace std;

/**< Quadrado Mágico *//**< //////////////////////////// */
void quadmag()
{
    /**< Quando flag == 0 sinifica q não é quadrado mágico */
    int i, j, L, soma=0, somaref=0, flag=1;
    cin>>L;
    int mat[L][L];

    for(i=0; i<L; i++) /**< Guardar as informações do quadrado */
        for(j=0; j<L; j++)
            cin>>mat[i][j];

    for(j=0; j<L; j++) /**< Primeira linha vai ser a referencia */
        somaref+=mat[0][j];

    for(i=0; i<j; i++) /**< Soma todas as linhas e compara a referencia */
    {
        for(j=0; j<L; j++)
        {
            if(j==0) soma = 0;
            soma += mat[i][j];
        }
        if(somaref!=soma)flag=0;
    }
    if(flag==1) /**< Todas as linhas tem mesmo valor */
    {
        for(j=0; j<L; j++) /**< Soma todas as colunas e compara a referencia */
        {
            for(i=0; i<L; i++)
            {
                 if(i==0) soma = 0;
                soma += mat[i][j];
            }
            if(somaref!=soma)flag=0;
        }
        if(flag==1) /**< Todas as colunas tem mesmo valor */
        {
            soma=0;
            for(i=0, j=0; i<L; i++, j++) /**< Diagonal a00 até aLL */
            {
                soma+=mat[i][j];
            }
            if(somaref!=soma)flag=0;
            if(flag==1)
            {
                soma=0;
                for(i=0, j=L-1; j>=0; i++, j--) /**< Diagonal a0L até aL0 */
                {
                    soma+=mat[i][j];
                }
                if(somaref!=soma)flag=0;
            }
        }
    }


    if(flag == 1) cout << soma;
    else cout << "-1";
}

/**< INT MAIN *//**< ////////////// */
int main()
{
    quadmag();
}

