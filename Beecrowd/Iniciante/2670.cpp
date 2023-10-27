#include <stdio.h>

#define INT_MAX 100000

int main(){
    int a1, a2, a3;
    scanf("%d%d%d", &a1, &a2, &a3);

    int menor = INT_MAX, aux;
    //if a1;
    aux = a2*2 + a3*4;
    if(aux<menor) menor=aux;
    //if a2;
    aux= a1*2 + a3*2;
    if(aux<menor) menor=aux;
    //if a3;
    aux = a1*4 + a2*2;
    if(aux<menor) menor=aux;

    printf("%d\n", menor);
    return 0;

}
