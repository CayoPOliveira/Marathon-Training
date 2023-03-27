#include <iostream>

using namespace std;

bool equil(int a, int b, int c, int d){
    if(b==c){
        b+=c;
        if(b == d){
            b+=d;
            if(b==a){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if(equil(a,b,c,d)) cout<<"S"<<endl;
    else cout<<"N"<<endl;

}
