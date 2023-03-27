#include <iostream>
using namespace std;

long long unsigned int mdc(long long unsigned int a, long long unsigned int b){
    while(b!=0){
        long long unsigned int r = a%b;
        a=b;
        b=r;
    }

    return a;
}

long long unsigned int mmc(long long unsigned int a, long long unsigned int b){
    long long unsigned int Mdc = mdc(a, b);

    return (a*b) / Mdc;
}


int main(){

    long long unsigned int a,b,c,d; /** (a/b) + (c/d) */
    cin>>a>>b>>c>>d;

    long long unsigned int den = mmc(b, d);
    b = den/b;
    d = den/d;
    long long unsigned int num = (a*b) + (c*d);

    long long unsigned int Mdc = mdc(num, den);
    num/=Mdc;
    den/=Mdc;

    cout<<num<<" "<<den<<endl;
}
