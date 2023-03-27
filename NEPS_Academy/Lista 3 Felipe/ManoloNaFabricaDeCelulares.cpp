#include<stdio.h>

int vet[6];

int main(){
    int n, i;
    int a, b, c;
    a=b=c=0;

    scanf("%d\n", &n);
    while(n--){
        scanf("%d", &i);
        vet[i]++;
        if(vet[1] and vet[3] and vet[5]){
            a++;
            vet[1]--;
            vet[3]--;
            vet[5]--;
        }
        if(vet[1] and vet[4]){
            b++;
            vet[1]--;
            vet[4]--;
        }
        if(vet[2] and vet[4]){
            c++;
            vet[2]--;
            vet[4]--;
        }
    }

    printf("A: %d\nB: %d\nC: %d\n", a, b, c);


}
