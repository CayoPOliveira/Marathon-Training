#include <iostream>
#include <cmath>

using namespace std;

/**< Lâmpada *//**< /////////////////////////////////////// */
int muda(int i)
{
    if(i==0) return 1;
    else return 0;
}

void lamp()
{
    int x,in,a=0,b=0;

    cin >> x;
    for(int i=0; i<x; i++)
    {
        a=muda(a);

        cin >> in;
        if(in == 1) continue;

        b=muda(b);
    }
    cout << a << endl << b;
}

/**< Divisores *//**< //////////////////////////////////////// */
void divisores()
{
    int x, i;
    cin >> x;
    for(i=1; i<=x; i++){
        if(x%i==0) cout << i << " ";
    }
}

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
/**< Raizes *//**< ////////////////////////////// */

void raiz()
{
    double n, x;
    cin >> n;

    cout.precision(4);
    cout.setf(ios::fixed);

    for(int i; i<n; i++)
    {
        cin >> x;
        cout << sqrt(x) << endl;
    }
}

/**< Potência Simples *//**< /////////////////// */

void potencia(){
    double a, b;

    cin >> a >> b;

    cout.precision(4);
    cout.setf(ios::fixed);

    cout << pow(a,b);
}

int main()
{
    potencia();
}

