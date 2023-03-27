#include<iostream>
#include <vector>

using namespace std;

vector<int> fib;

void fibench(){
    int i=1, a, b;
    fib.push_back(1);
    fib.push_back(2);
    while(fib[i]<=25000){
        a=fib[i-1];
        b=fib[i];
        fib.push_back(a+b);
        i++;
    }
/*
    for(int i=0; i<fib.size(); i++){
        cout<<fib[i]<<endl;
    }
//*/
}

int main(){

    int n;
    cin>>n;
    fibench();
    while(n--){
        int m;
        cin>>m;
        int soma=0;
        for(int i=fib.size()-1; i>0; i--){
            if( m >= fib[i]){
                //cout<<"oi";
                m -= fib[i];
                //cout<<fib[i]<<" "<<fib[i-1]<<endl;
                //if(i>0)
                    soma+=fib[i-1];
                //else soma+=fib[i];
            }
        }
        cout<<soma<<endl;
    }


}
