#include <iostream>
#include <algorithm>
using namespace std;

/**< Ordenação Simples */
 void ord(){
    int N;
    cin>>N;
    int vet[N];
    for(int i=0; i<N; i++) cin>>vet[i];
    sort(vet, vet+N);
    for(int i=0; i<N; i++) cout<<vet[i]<<" ";
 }
/**< INT MAIN */
int main()
{
    ord();
    return 0;
}

