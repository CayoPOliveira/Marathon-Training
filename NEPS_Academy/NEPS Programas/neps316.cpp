#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x1,y1;
    int x2,y2;
    int n;
    cin>>n;
    long long unsigned int Soma=0;
    for(int i=0; i<n; i++){
        cin>>x1>>y1>>x2>>y2;
        Soma+= pow(x2-x1, 2) + pow(y2-y1, 2);
    }
    cout<<Soma<<endl;
}
