#include <iostream>
#include <list>

using namespace std;

int main(){
    int n;
    cin>>n;
    list<int> l;
    list<int>::iterator p;

    int i=100;
    int k=0;
    while(i>=1){
        k+=n/i;
        l.push_back(n/i);
        n=n%i;
        if(i%2) i=i-5;
        if(!i) i=2;
        i=i/2;
    }
    cout<<k;
    for(p=l.begin(); p!=l.end(); ++p){
        cout<<endl<<*p;
    }

}

