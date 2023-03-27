#include <iostream>
#include <set>

using namespace std;

int main(){
    string traz ={"Chirrin"};
    string vai = {"Chirrion"};
    int n;
    cin>>n;
    while(n--){
        set<string> st;
        int m;
        cin>>m;
        while(m--){
            char c;
            string coisa;
            string magica;
            cin>>coisa>>magica;
            if(magica=="chirrin"){
                st.insert(coisa);
                //cout<<"a";
            }
            if(magica=="chirrion"){
                if(st.find(coisa)!=st.end()) st.erase(coisa);
            }
        }
        cout<<"TOTAL"<<endl;
        for(set<string>::iterator it = st.begin(); it!=st.end(); it++){
            cout<<*it<<endl;
        }
    }
}
