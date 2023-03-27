#include <iostream>
#include <cmath>
using namespace std;

/**< Sedex Marciano */
void sedex(){
    int L, A, P, R, DiagBase, DiagCaixa;
    cin>>L>>A>>P>>R;
    DiagBase=sqrt(pow(L,2)+pow(A,2));
    DiagCaixa=sqrt(pow(DiagBase,2)+pow(P,2));
    if(DiagCaixa<=R*2) cout<<"S"<<endl;
    else cout<<"N"<<endl;
}


/**< INT MAIN */
int main()
{
    sedex();
    return 0;
}

