#include <iostream>

using namespace std;

bool pot2(int n){
    if(n==1) return 0;
    return ( ( n&(n-1) ) == 0);
}

int main(){
    long long unsigned int n;
    cin>>n;

    if(pot2(n+1)) cout<<"S"<<endl;
    else cout<<"N"<<endl;
}
