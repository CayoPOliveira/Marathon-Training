#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vet;
    int i=10;
    int a;
    while(i--){
        cin>>a;
        vet.push_back(a);
    }
    for(i=vet.size()-1; i>=0; i--){
        cout<<vet[i]<<endl;
    }
}

