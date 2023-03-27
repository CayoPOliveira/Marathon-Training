#include <iostream>
#include <map>

using namespace std;

int main(){
    int c, n;
    cin>>c>>n;
    map<int,int> m;
    for(int i=0; i<c; i++){
        int p, v;
        cin>>p>>v;
        m.insert(make_pair(p, v));
    }
    map<int, int> m2;
    for(int i=0; i<n; i++){
        int p, v;
        cin>>p>>v;
        auto it=m.find(p);
        if(it==m.end()){
            m.insert(make_pair(p, v));
            m2.insert(make_pair(p, v));
        }
        else if(v>m[p]){
            m[p]=v;
            m2[p]=v;
        }
    }
    for(auto it=m2.begin(); it!=m2.end(); ++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
