#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/**< Olimpíadas */
struct medalhas{
    int cod;
    int o, p, bronze;
};
bool maiorouro(medalhas a, medalhas b){
    if(a.o!=b.o) return a.o > b.o;
    if(a.o==b.o and a.p!=b.p) return a.p > b.p;
    if(a.o==b.o and a.p==b.p and a.bronze!=b.bronze) return a.bronze > b.bronze;
    if(a.o==b.o and a.p==b.p and a.bronze==b.bronze) return a.cod<b.cod;
}
bool maiorprata(medalhas a, medalhas b){
    if(a.o==b.o) return a.p > b.p;
    return 0;
}
bool maiorbronze(medalhas a, medalhas b){
    if(a.o==b.o and a.p==b.p) return a.bronze > b.bronze;
    return 0;
}
bool igual(medalhas a, medalhas b){
    if(a.o==b.o and a.p==b.p and a.bronze==b.bronze) return a.cod<b.cod;
    return 0;
}
void olimp(){
    int NPaises, NModalidades, o, p, b;
    cin>>NPaises>>NModalidades;
    struct medalhas vet[NPaises];
    for(int i=0; i<NPaises; i++){
        vet[i].o=vet[i].p=vet[i].bronze=0;
        vet[i].cod = i+1;
    }
    for(int i=0; i<NModalidades; i++){
        cin>>o>>p>>b;
        vet[o-1].o++;
        vet[p-1].p++;
        vet[b-1].bronze++;
    }
    sort(vet, vet+NPaises, maiorouro);
    //sort(vet, vet+NPaises, maiorprata);
    //sort(vet, vet+NPaises, maiorbronze);
    //sort(vet, vet+NPaises, igual);
    for(int i=0; i<NPaises; i++){
        cout<<vet[i].cod<<" "/*<<vet[i].o<<" "<<vet[i].p<<" "<<vet[i].bronze<<endl*/;
    }
    cout<<endl;
}


/**< INT MAIN */
int main()
{
    olimp();
    return 0;
}
