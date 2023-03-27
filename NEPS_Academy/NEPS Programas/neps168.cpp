#include <iostream>
#include <set>

using namespace std;

int main(){
    int N, C, M;
    cin>>N>>C>>M;

    set<int> car;

    int k=C;
    while(k--){
        int x;
        cin>>x;
        car.insert(x);
    }

    int cont=0;

    while(M--){
        int x;
        cin>>x;
        if(car.find(x)!=car.end()){
            car.erase(x);
            cont++;
        }
    }

    cout<<C-cont<<endl;
}

