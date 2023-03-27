#include <iostream>
#include <vector>
using namespace std;

vector<int> veta(1009);
vector<int> vetb(1009);
int conta, contb;


int main(){
    int a, b;
    cin>>a>>b;
    for(int i=0; i<a; i++){
        int x;
        cin>>x;
        veta.push_back(x);
    }
    for(int i=0; i<b; i++){
        int x;
        cin>>x;
        vetb.push_back(x);
    }

}

