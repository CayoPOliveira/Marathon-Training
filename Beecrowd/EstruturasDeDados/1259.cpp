#include <iostream>
#include <queue>
using namespace std;

struct tipo{
    int i;
    bool operator< (const tipo&l) const{
        return i > l.i;
    }
};
struct tipo2{
    int i;
    bool operator < (const tipo2&l) const{
        return i < l.i;
    }
};
priority_queue<tipo> par;
priority_queue<tipo2> impar;



int main(){
    int n;
    int x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x%2 == 0){
            struct tipo aux;
            aux.i = x;
            par.push(aux);
        }
        else {
            struct tipo2 aux2;
            aux2.i = x;
            impar.push(aux2);
        }

    }

    while(!par.empty()){
        struct tipo x;
        x=par.top();
        par.pop();
        cout<<x.i<<endl;
    }
    while(!impar.empty()){
        struct tipo2 x;
        x=impar.top();
        impar.pop();
        cout<<x.i<<endl;
    }
}
