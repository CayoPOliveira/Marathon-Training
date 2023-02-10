#include <stdio.h>

int main(){
    int N, h;
    double sph;
    scanf("%d%d%lf", &N, &h, &sph);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", N, (double)h*sph);
    return 0;
}