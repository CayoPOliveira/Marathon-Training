#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    set<int> a, b, inter, difa, difb;
    while(m--){
        int x;
        cin>>x;
        a.insert(x);
    }
    while(n--){
        int x;
        cin>>x;
        b.insert(x);
    }
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(inter, inter.begin()));
    set_difference(a.begin(), a.end(), inter.begin(), inter.end(), inserter(difa, difa.begin()));
    set_difference(b.begin(), b.end(), inter.begin(), inter.end(), inserter(difb, difb.begin()));
    int troca;
    if(difa.size()<=difb.size()) troca = difa.size();
    else troca = difb.size();

    cout<<troca<<endl;
}
