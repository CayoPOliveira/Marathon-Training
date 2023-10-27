#include <iostream>
#include<cstdio>

using namespace std;

int main(){
    double vet[5]={1.5, 2.5, 3.5, 4.5, 5.5};
    int p;
    double val=0;
    cin>>p;
    while(p--){
        int a, b;
        cin>>a>>b;
        a-=1001;
        val+=vet[a]*b;
    }
    printf("%.2lf\n", val);
}

