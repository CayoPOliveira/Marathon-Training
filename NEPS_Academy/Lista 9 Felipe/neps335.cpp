#include <iostream>

using namespace std;

int main(){
    int x1,y1;
    int x2,y2;

    cin>>x1>>y1>>x2>>y2;

    int x = x1-x2;
    if(x<0) x = -x;
    int y = y1-y2;
    if(y<0) y = -y;

    cout<<x+y<<endl;
}
