#include <iostream>
using namespace std;

/**< Opera��es */
void operacoes(){
    double a, b;
    char o;
    cin>>o>>a>>b;

    cout.precision(2);
    cout.setf(ios::fixed);

    if(o=='M') cout<<a*b;
    if(o=='D') cout<<a/b;

}

/**< INT MAIN */
int main(){
    operacoes();
    return 0;
}
