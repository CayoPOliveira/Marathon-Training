#include <iostream>
#include <cmath>
using namespace std;

float distance(float x1, float y1, float x2, float y2){
    float d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    return d;
}

bool isInside(float c_x, float c_y, float raio, float x, float y){

    if (distance(c_x, c_y, x, y) <= raio)
        return true;
    else
        return false;
}

int main(){
    float r, h, l;
    int pizza = 1;
    while(1){
        cin>>r;
        if(!r) break;
        cin>>h>>l;
        //h = h/2;
        //l=l/2;
        if(isInside( 0.0, 0.0, r, l/2, h/2) and isInside( 0, 0, r, -l/2, -h/2)) cout<<"Pizza "<<pizza<<" fits on the table."<<endl;
        else cout<<"Pizza "<<pizza<<" does not fit on the table."<<endl;
        pizza++;
    }
}
