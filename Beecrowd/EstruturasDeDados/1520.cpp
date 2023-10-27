#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        multiset<int> mst;
        while(n--){
            int a, b;
            cin>>a>>b;
            for(int i=a; i<=b; i++){
                mst.insert(i);
            }
        }

        int acha;
        cin>>acha;
        auto it = mst.equal_range(acha);
        if(acha != *it.first){
            cout<<acha<<" not found"<<endl;
        }
        else{
            cout<<acha<<" found from "<< distance(mst.begin(), it.first) <<" to "<< distance(mst.begin(),it.second)-1 <<endl;
        }
    }
}
