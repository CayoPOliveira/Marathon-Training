#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pokedex
{
    char pokemon[1000];
    int flag;
};
int main()
{
    int n_testes, repetidos, k, i, j;
    struct pokedex bag[1001];

    scanf("%d", &n_testes);

        repetidos=0;

        for( k=0; k<n_testes; k++){
            scanf("%s", bag[k].pokemon);
            bag[k].flag=0;
        } /**< salva o nome dos pomekons q ele capturou */
        //printf("%i", n_testes);

        for(i=0; i < n_testes; i++)
        {
            if(bag[i].flag!=1)
                    for(j=i+1; j < n_testes; j++)
                    {
                        if( strcmp(bag[i].pokemon, bag[j].pokemon) == 0 )
                        {
                            repetidos++;
                            bag[j].flag=1;
                        }
                    }
        }

        printf("Falta(m) %d pomekon(s).\n", 151-n_testes+repetidos);

    return 0;
}

