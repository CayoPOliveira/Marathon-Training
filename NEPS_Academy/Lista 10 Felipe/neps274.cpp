#include <iostream>

using namespace std;

int mdc(int a, int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    int n,a,b;
    cin>>n>>a;
    for(int i=0; i<n-1; i++){
        cin>>b;
        a = mdc(a,b);
    }
    cout<<a<<endl;
}
