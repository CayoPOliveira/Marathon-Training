#include <iostream>
#include <set>

using namespace std;

int main(){
    int N;
    cin>>N;
    set<int> s;
    int cont=0;
    while(N--){
        int x;
        cin>>x;
        if(s.empty()){
            s.insert(x);
            cont++;
        }
        else if(s.find(x)==s.end()){
            s.insert(x);
            cont++;
        }
    }
    cout<<cont<<endl;
}
