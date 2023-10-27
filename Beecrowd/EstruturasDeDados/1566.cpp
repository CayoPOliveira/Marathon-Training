#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int np;
        scanf("%d", &np);
        int vet[240];
        for(int i=0; i<240; i++) vet[i]=0;
        while(np--){
            int a;
            scanf("%d", &a);
            vet[a]++;
        }
        bool primeiro = true;
        for(int i=0; i<240; i++){
            for(int j=0; j<vet[i]; j++){
                if(primeiro) primeiro = false;
                else printf(" ");
                printf("%d", i);
            }
        }
        printf("\n");
    }
}
