#include <iostream>
#include <set>

using namespace std;

int main(){
    int C;
    cin>>C;
    set<int> est;
    int cont=0;
    while(C--){
        int x;
        cin>>x;
        if(est.empty()){
            est.insert(x);
            cont+=2;
        }
        else{
            if(est.find(x)!=est.end()) est.erase(x);
            else{
                est.insert(x);
                cont+=2;
            }
        }
    }
    cout<<cont<<endl;
}


