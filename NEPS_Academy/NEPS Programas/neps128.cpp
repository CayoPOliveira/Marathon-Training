#include <iostream>
using namespace std;

/**< Robô de fazenda */
void robo()
{
    int est, comandos, prox, cont=0, x, p=1;
    cin>>est>>comandos>>prox;
    int vet[est];
    if(p==prox)cont++;
    for(int i=0; i<comandos; i++)
    {
        cin>>x;
        if(x==1)p++;
        else p--;
        if(p>est) p=1;
        if(p<1) p=est;
        if(p==prox) cont++;
    }
    cout<<cont;

}
/**< INT MAIN */
int main()
{
    robo();
    return 0;
}
