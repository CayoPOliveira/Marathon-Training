#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    set<int> mat[n+1];

    for(int i=0; i<m; i++){
        int t, a, b;
        cin>>t>>a>>b;
        if(t){
            mat[a].insert(b);
            mat[b].insert(a);
        }
        else{
            if(mat[a].find(b)!=mat[a].end()) cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
    }
}
