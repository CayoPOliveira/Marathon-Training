#include <iostream>
#include <set>
using namespace std;

int main(){
    int N, C;
    set<int> S;
    cin>>N>>C;
    while(C--){
        int x;
        cin>>x;
        if(S.empty()) S.insert(x);
        else{
            if(S.find(x)==S.end()) S.insert(x);
        }
    }
    int k = S.size();

    cout<<N-k<<endl;


}

