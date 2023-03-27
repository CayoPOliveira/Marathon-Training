#include <iostream>
#include <iomanip>
#include <set>

using namespace std;

int main(){
    int N;
    cin>>N;
    set<double> s;
    while(N--){
        double p;
        int g;
        cin>>p>>g;
        double pkg;
        pkg = 1000.0*p / (double) g;
        if(s.empty()){
            s.insert(pkg);
        }
        else if(s.find(pkg)==s.end()) s.insert(pkg);
    }
    set<double>::iterator it=s.begin();
    cout << fixed << setprecision(2);
    cout<< *it <<endl;
}

