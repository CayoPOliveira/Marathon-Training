#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<bool> vet;
    int x, flag=1, i;
    cin>>x;
    while(x>=1){
        vet.push_back(x%2);
        x=x/2;
    }
    if(x==1){
        vet.push_back(x);
        flag=0;
    }
    while(flag){
        if(vet.size()>0){
            i=vet.size()-1;
            if(vet[i]==0){
                vet.erase(vet.begin()+i);
            }
            else flag=0;
        }
        else flag=0;
    }
    i=vet.size()-1;
    for(i=vet.size()-1; i>=0; i--){
        cout<<vet[i];
    }
    if(vet.size()==0) cout<<"0";
}
