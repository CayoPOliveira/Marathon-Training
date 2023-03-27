#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

vector<int> vet;
vector<int>::iterator p;

int main(){
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        int x;
        cin>>x;
        vet.push_back(x);
    }
    int M;
    cin>>M;
    for(int i=0; i<M; i++){
        int x;
        cin>>x;
        for(p=vet.begin(); p!=vet.end(); p++){
            if(*p == x){
                vet.erase(p);
                break;
            }
        }
    }
    for(int i=0; i<vet.size(); i++){
        if(i!=0) cout<<" ";
        cout<<vet[i];
    }
    cout<<endl;
}
