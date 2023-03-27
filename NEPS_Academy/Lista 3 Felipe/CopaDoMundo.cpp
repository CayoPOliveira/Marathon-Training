#include <iostream>
using namespace std;

int main(){
    char l='A';
    char a[31];
    for(int i=0; i<16; i++){
        a[i]=l;
        l++;
    }
    int k=16;
    for(int i=0; i<30; i+=2){
        int x, y;
        cin>>x>>y;
        if(x>y){
            a[k]=a[i];
        }
        else{
            a[k]=a[i+1];
        }
        k++;
    }
    cout<<a[30]<<endl;
}
