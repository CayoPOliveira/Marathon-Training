#include <iostream>
using namespace std;

/**< Consecutivos *//**< ////////////////////////////////////// */
void consecutivos(){
    int N, cont=0, pontos=0, x1=0, x2, i;

    cin >> N;

    for(i=0; i<N; i++){
        cin >> x2;

        if(x2==x1)
            cont++;
        else{
            x1=x2;
            if(cont>pontos) pontos = cont;
            cont = 1;
        }
    }
    if(cont>pontos) pontos = cont;
    cout << pontos;

}


int main()
{
    consecutivos();
}


