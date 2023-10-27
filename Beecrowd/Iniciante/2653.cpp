#include <iostream>
#include <set>

using namespace std;

int main()
{
    string joia;
    set<string> s;
    int cont=0;
    cin>>joia;
    while(!cin.eof()){
        if(s.find(joia)==s.end()){
            cont++;
            s.insert(joia);
        }
        cin>>joia;
    }
    cout<<cont<<endl;
}
