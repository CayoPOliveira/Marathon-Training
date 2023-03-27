#include <iostream>
using namespace std;

/**< Overflow */
void overflow(){
    int N, a, b;
    char op;
    cin>>N>>a>>op>>b;
    if(op=='+')
        if(a+b<=N) cout<<"OK";
        else cout<<"OVERFLOW";
    if(op=='*')
        if(a*b<=N) cout<<"OK";
        else cout<<"OVERFLOW";
}

/**< INT MAIN */
int main(){
    overflow();
    return 0;
}

