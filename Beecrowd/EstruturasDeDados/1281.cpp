#include <iostream>
#include<map>
#include <cstdio>

using namespace std;



int main(){
    string a;
    double conta=0.0;
    double b;
    int c;
    int n;
    cin>>n;
    while(n--){
        conta=0.0;
        int x;
        cin>>x;
        map<string, double> vet;

        for(int i=0; i<x; i++){
           cin>>a>>b;
           vet.insert({a, b});
        }
        cin>>x;
        while(x--){
            cin>>a>>c;
            conta+=vet[a]*c;
        }
        printf("R$ %.2lf\n", conta);
    }
}

