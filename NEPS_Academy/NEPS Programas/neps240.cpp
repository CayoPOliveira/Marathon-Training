#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

/**< Auto Estrada
OBI 2008 - Segunda Fase - Nivel Júnior */
void estrada(){
    int N, cont=0;
    char C;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>C;
        if(C=='P') cont+=2;
        if(C=='C') cont+=2;
        if(C=='A') cont++;
    }
    cout<<cont<<endl;
}

/**< INT MAIN */
int main()
{
    estrada();
    return 0;
}


