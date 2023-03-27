#include <iostream>
#include <cmath>
using namespace std;

float distance(int x1, int y1, int x2, int y2){
    float d = sqrt(pow(x1 - x2 , 2) + pow(y1 - y2 ,  2));
    return d;
}


int main(){

    int r1, x1, y1;
    int r2, x2, y2;

    while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
        if(distance(x1,y1,x2,y2) + r2 <= r1)
            cout<<"RICO"<<endl;
        else
            cout<<"MORTO"<<endl;
    }
}
